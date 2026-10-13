// SPDX-License-Identifier: AGPL-3.0-or-later
#include "MsgType.h"
#include "Networking.h"

#include <catch2/catch_test_macros.hpp>
#include <chrono>
#include <cstdint>
#include <filesystem>
#include <memory>
#include <prometheus/core.h>
#include <string>
#include <thread>
#include <vector>
#include <windows.h>

using namespace std::chrono_literals;
using Networking::PacketType;

namespace {

constexpr unsigned short kPort = 7781;

struct ServerEvents
{
  bool userConnected = false;
  std::vector<std::vector<unsigned char>> messages;
};

void OnServerPacket(void* state, Networking::UserId, PacketType type,
                    Networking::PacketData data, size_t length)
{
  auto& events = *static_cast<ServerEvents*>(state);
  if (type == PacketType::ServerSideUserConnect) {
    events.userConnected = true;
  }
  if (type == PacketType::Message) {
    events.messages.emplace_back(data, data + length);
  }
}

struct ClientEvents
{
  bool accepted = false;
  bool denied = false;
  std::string error;
};

void RecordClientEvent(ClientEvents& events, PacketType type,
                       const char* error)
{
  if (type == PacketType::ClientSideConnectionAccepted) {
    events.accepted = true;
  }
  if (type == PacketType::ClientSideConnectionDenied) {
    events.denied = true;
    events.error = error;
  }
}

// Ticks up to 200 times, 10 ms apart, until done() holds.
template <class TickFn, class DoneFn>
void Pump(TickFn tick, DoneFn done)
{
  for (int i = 0; i < 200 && !done(); ++i) {
    std::this_thread::sleep_for(10ms);
    tick();
  }
}

std::shared_ptr<Networking::IServer> CreateLoopbackServer()
{
  return Networking::CreateServer("127.0.0.1", kPort, 8,
                                  kNetworkingPasswordPrefix,
                                  std::make_shared<prometheus::Registry>());
}

template <class Fn>
Fn GetExport(HMODULE dll, const char* name)
{
  auto fn = reinterpret_cast<Fn>(GetProcAddress(dll, name));
  REQUIRE(fn);
  return fn;
}

}

TEST_CASE("SUG protocol id is accepted", "[loopback]")
{
  ServerEvents serverEvents;
  auto server = CreateLoopbackServer();

  // Loaded the way SkyrimPlatform2 loads native modules.
  std::filesystem::path dllPath(SUG_NET_DLL_PATH);
  dllPath.make_preferred();
  const HMODULE dll =
    LoadLibraryExW(dllPath.c_str(), nullptr,
                   LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR |
                     LOAD_LIBRARY_SEARCH_SYSTEM32);
  REQUIRE(dll);

  using OnPacket = void (*)(int32_t type, const char* content, size_t length,
                            const char* error, void* state);
  const auto createClient =
    GetExport<void (*)(const char*, uint16_t, const char*)>(dll,
                                                            "CreateClient");
  const auto destroyClient = GetExport<void (*)()>(dll, "DestroyClient");
  const auto isConnected = GetExport<bool (*)()>(dll, "IsConnected");
  const auto tick = GetExport<void (*)(OnPacket, void*)>(dll, "Tick");
  const auto send = GetExport<void (*)(const char*, bool)>(dll, "Send");

  ClientEvents clientEvents;
  const OnPacket onClientPacket = [](int32_t type, const char*, size_t,
                                     const char* error, void* state) {
    RecordClientEvent(*static_cast<ClientEvents*>(state),
                      static_cast<PacketType>(type), error);
  };
  const auto tickBoth = [&] {
    server->Tick(OnServerPacket, &serverEvents);
    tick(onClientPacket, &clientEvents);
  };

  createClient("127.0.0.1", kPort, "");
  Pump(tickBoth, [&] {
    return clientEvents.accepted && serverEvents.userConnected &&
      isConnected();
  });
  REQUIRE(clientEvents.accepted);
  REQUIRE(isConnected());
  REQUIRE(serverEvents.userConnected);

  send(R"({"t":1,"contentJsonDump":"{}"})", true);
  Pump(tickBoth, [&] { return !serverEvents.messages.empty(); });
  REQUIRE(serverEvents.messages.size() == 1);
  const auto& message = serverEvents.messages.front();
  REQUIRE(message.size() >= 2);
  const int packetId = message[0];
  const int msgType = message[1];
  CHECK(packetId == static_cast<int>(Networking::MinPacketId));
  CHECK(msgType == static_cast<int>(MsgType::CustomPacket));

  // The DLL is never freed, so a failed REQUIRE cannot unload it under a live client.
  destroyClient();
}

TEST_CASE("a wrong protocol id is refused", "[loopback]")
{
  ServerEvents serverEvents;
  auto server = CreateLoopbackServer();

  ClientEvents clientEvents;
  // skymp's protocol identifier
  auto client = Networking::CreateClient("127.0.0.1", kPort, 2000, "7_");
  Pump(
    [&] {
      server->Tick(OnServerPacket, &serverEvents);
      client->Tick(
        [](void* state, PacketType type, Networking::PacketData, size_t,
           const char* error) {
          RecordClientEvent(*static_cast<ClientEvents*>(state), type, error);
        },
        &clientEvents);
    },
    [&] { return clientEvents.denied; });

  REQUIRE(clientEvents.denied);
  CHECK(clientEvents.error == "Invalid password");
  CHECK_FALSE(client->IsConnected());
  CHECK_FALSE(serverEvents.userConnected);
}
