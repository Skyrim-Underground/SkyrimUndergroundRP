// SPDX-License-Identifier: AGPL-3.0-or-later
#pragma once
#include <string>

// SHA-256 of the bytes of str as 64 lowercase hex digits, computed by Windows CNG.
std::string Sha256Hex(const std::string& str);
