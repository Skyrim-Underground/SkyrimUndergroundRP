// SPDX-License-Identifier: AGPL-3.0-or-later
#pragma once

// Bump on every change to the wire format; peers with different values refuse each other.
constexpr auto kMessagingProtocolVersion = "sug1_";

// SLikeNet connection password prefix; a server password from settings is appended to it.
constexpr auto kNetworkingPasswordPrefix = kMessagingProtocolVersion;
