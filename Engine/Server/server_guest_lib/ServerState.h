#pragma once
#include "ActorsMap.h"
#include "Config.h"
#include <Networking.h>
#include <array>
#include <memory>
#include <simdjson.h>
#include <unordered_map>

class MpActor;

struct DeferredMessage
{
  std::vector<uint8_t> packetData;
  bool packetReliable = false;
  uint32_t actorIdExpected = 0;
};

struct UserInfo
{
  bool isDisconnecting = false;

  std::vector<std::vector<DeferredMessage>> deferredChannels;

  std::string guid;
};

class ServerState
{
public:
  ServerState() { userInfo.resize(kMaxPlayers); }

  std::vector<std::unique_ptr<UserInfo>> userInfo;
  Networking::UserId maxConnectedId = 0;
  ActorsMap actorsMap;
  Networking::UserId disconnectingUserId = Networking::InvalidUserId;

  void Connect(Networking::UserId userId, const std::string& guid);
  void Disconnect(Networking::UserId userId) noexcept;
  bool IsConnected(Networking::UserId userId) const;
  MpActor* ActorByUser(Networking::UserId userId);
  const std::string& UserGuid(Networking::UserId userId);
  Networking::UserId UserByActor(MpActor* actor);
  void EnsureUserExists(Networking::UserId userId);
};
