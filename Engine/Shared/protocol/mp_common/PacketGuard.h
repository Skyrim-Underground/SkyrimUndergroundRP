#pragma once
#include "RakNet.h"

class PacketGuard
{
public:
  PacketGuard(RakPeerInterface* peer_, Packet* packet_)
    : peer(peer_)
    , packet(packet_)
  {
  }

  ~PacketGuard() { peer->DeallocatePacket(packet); }

private:
  RakPeerInterface* const peer;
  Packet* const packet;
};
