// SPDX-License-Identifier: AGPL-3.0-or-later
#include "Sha256.h"

#include <stdexcept>

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <bcrypt.h>

std::string Sha256Hex(const std::string& str)
{
  unsigned char hash[32];
  const NTSTATUS status = BCryptHash(
    BCRYPT_SHA256_ALG_HANDLE, nullptr, 0,
    reinterpret_cast<PUCHAR>(const_cast<char*>(str.data())),
    static_cast<ULONG>(str.size()), hash, sizeof hash);
  if (!BCRYPT_SUCCESS(status)) {
    throw std::runtime_error("BCryptHash failed with status " +
                             std::to_string(status));
  }

  static constexpr auto kHexDigits = "0123456789abcdef";
  std::string hex(sizeof hash * 2, ' ');
  for (size_t i = 0; i < sizeof hash; ++i) {
    hex[2 * i] = kHexDigits[hash[i] >> 4];
    hex[2 * i + 1] = kHexDigits[hash[i] & 0xF];
  }
  return hex;
}
