#include "Networking.h"

#include <memory>
#include <stdexcept>
#include <string>

#include <slikenet/MessageIdentifiers.h>
#include <slikenet/types.h>

#include "NetworkingInterface.h"
#include "PacketGuard.h"

namespace {
const char* GetError(unsigned char packetType)
{
  switch (packetType) {
    case ID_ALREADY_CONNECTED:
      return "Already connected";
    case ID_CONNECTION_BANNED:
      return "Banned";
    case ID_INVALID_PASSWORD:
      return "Invalid password";
    case ID_INCOMPATIBLE_PROTOCOL_VERSION:
      return "Incompatible protocol version";
    case ID_IP_RECENTLY_CONNECTED:
      return "IP recently connected";
    case ID_NO_FREE_INCOMING_CONNECTIONS:
      return "No free incoming connections";
    default:
      return "";
  }
}

class Client : public Networking::IClient
{
public:
  Client(const char* ip_, unsigned short port_, int timeoutMs_,
         const char* password_)
    : ip(ip_)
    , port(port_)
    , password(password_)
  {

    peer.reset(new RakPeer);
    socket.reset(new SocketDescriptor(0, nullptr));
    const auto res = peer->Startup(1, &*socket, 1);
    if (res != StartupResult::RAKNET_STARTED) {
      throw std::runtime_error("Peer startup failed with code " +
                               std::to_string(static_cast<int>(res)));
    }
    const auto conRes = peer->Connect(ip.data(), port, password.data(),
                                      static_cast<int>(password.size()));
    if (conRes != ConnectionAttemptResult::CONNECTION_ATTEMPT_STARTED) {
      throw std::runtime_error("Peer connect failed with code " +
                               std::to_string(static_cast<int>(conRes)));
    }
    peer->SetTimeoutTime(timeoutMs_, {});
  }

  ~Client() override
  {
    packetGuard.reset(); // Depends on peer, so must be reset first
    peer->Shutdown(0);
  }

  void Send(Networking::PacketData data, size_t length, bool reliable) override
  {
    peer->Send(reinterpret_cast<const char*>(data), length, MEDIUM_PRIORITY,
               reliable ? RELIABLE : UNRELIABLE, 0, serverGuid, false);
  }

  void Tick(OnPacket onPacket, void* state) override
  {
    std::weak_ptr<SLNet::RakPeerInterface> weakPeer = peer;
    while (1) {
      Packet* packet = nullptr;
      auto p = weakPeer.lock();
      if (p) {
        packet = p->Receive();
        packetGuard.reset(new PacketGuard(&*p, packet));
      }
      p.reset();
      if (!packet)
        break;

      if (packet->data[0] == ID_CONNECTION_REQUEST_ACCEPTED) {
        serverGuid = packet->guid;
        isConnected = true;
      }

      if (packet->data[0] == ID_CONNECTION_LOST ||
          packet->data[0] == ID_DISCONNECTION_NOTIFICATION) {
        isConnected = false;
      }

      HandlePacketClientside(onPacket, state, packet);
    }
  }

  bool IsConnected() const override { return isConnected; }

private:
  const std::string ip;
  const unsigned short port;
  const std::string password;

  RakNetGUID serverGuid = UNASSIGNED_RAKNET_GUID;
  std::shared_ptr<RakPeerInterface> peer;
  std::unique_ptr<SocketDescriptor> socket;
  std::unique_ptr<PacketGuard> packetGuard;
  bool isConnected = false;
};
} // namespace

std::shared_ptr<Networking::IClient> Networking::CreateClient(
  const char* serverIp, unsigned short serverPort, int timeoutMs,
  const char* password)
{
  return std::make_shared<Client>(serverIp, serverPort, timeoutMs, password);
}

void Networking::HandlePacketClientside(Networking::IClient::OnPacket onPacket,
                                        void* state, Packet* packet)
{
  const auto packetId = packet->data[0];
  const auto err = GetError(packetId);
  if (packetId >= Networking::MinPacketId) {
    onPacket(state, Networking::PacketType::Message, packet->data,
             packet->length, "");
  } else if (packetId == ID_CONNECTION_LOST ||
             packetId == ID_DISCONNECTION_NOTIFICATION) {
    onPacket(state, Networking::PacketType::ClientSideDisconnect, nullptr, 0,
             "");
  } else if (packetId == ID_CONNECTION_ATTEMPT_FAILED) {
    onPacket(state, Networking::PacketType::ClientSideConnectionFailed,
             nullptr, 0, "");
  } else if (packetId == ID_CONNECTION_REQUEST_ACCEPTED) {
    onPacket(state, Networking::PacketType::ClientSideConnectionAccepted,
             nullptr, 0, "");
  } else if (err[0]) {
    onPacket(state, Networking::PacketType::ClientSideConnectionDenied,
             nullptr, 0, err);
  }
}
