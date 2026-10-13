#include "MpClientPlugin.h"

#include <slikenet/BitStream.h>
#include <tuple>

void MpClientPlugin::CreateClient(State& state, const char* targetHostname,
                                  uint16_t targetPort, const char* password)
{
  static const int kTimeoutMs = 60000;
  const std::string fullPassword =
    std::string(kNetworkingPasswordPrefix) + (password ? password : "");
  state.cl = Networking::CreateClient(targetHostname, targetPort, kTimeoutMs,
                                      fullPassword.data());
}

void MpClientPlugin::DestroyClient(State& state)
{
  state.cl.reset();
}

bool MpClientPlugin::IsConnected(State& state)
{
  return state.cl && state.cl->IsConnected();
}

void MpClientPlugin::Tick(State& state, OnPacket onPacket,
                          DeserializeMessage deserializeMessageFn,
                          void* state_)
{
  if (!state.cl)
    return;

  std::tuple<OnPacket, DeserializeMessage, void*> locals(
    onPacket, deserializeMessageFn, state_);

  state.cl->Tick(
    [](void* rawState, Networking::PacketType packetType,
       Networking::PacketData data, size_t length, const char* error) {
      const auto& [onPacket, deserializeMessageFn, state] =
        *reinterpret_cast<std::tuple<OnPacket, DeserializeMessage, void*>*>(
          rawState);

      if (packetType != Networking::PacketType::Message) {
        return onPacket(static_cast<int32_t>(packetType), "", 0, error, state);
      }

      std::string deserializedJsonContent;
      if (deserializeMessageFn(data, length, deserializedJsonContent)) {
        return onPacket(static_cast<int32_t>(packetType),
                        deserializedJsonContent.data(),
                        deserializedJsonContent.size(), error, state);
      }
    },
    &locals);
}

void MpClientPlugin::Send(State& state, const char* jsonContent, bool reliable,
                          SerializeMessage serializeMessageFn)
{
  if (!state.cl) {
    // TODO(#263): we probably should log something here
    return;
  }

  SLNet::BitStream stream;
  serializeMessageFn(jsonContent, stream);
  state.cl->Send(stream.GetData(), stream.GetNumberOfBytesUsed(), reliable);
}

void MpClientPlugin::SendRaw(State& state, const void* data, size_t size,
                             bool reliable)
{
  if (!state.cl) {
    // TODO(#263): we probably should log something here
    return;
  }

  state.cl->Send(reinterpret_cast<Networking::PacketData>(data), size,
                 reliable);
}
