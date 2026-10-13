# SPDX-License-Identifier: AGPL-3.0-or-later
vcpkg_from_github(
  OUT_SOURCE_PATH SOURCE_PATH
  REPO biaks/prometheus-cpp-lite
  REF e6e54d2cbc1d3650d9ecec62d75404db7c9b653b # v2.0
  SHA512 dcf42be028f5b740ce61b7523047235c385a4bb9fcc610733196a5a066004f9390b4df878f05515595f6e959eadea1a544408d86a420abd2c6ef85cb887881cb
  HEAD_REF master
)

# core.h calls std::to_chars without including <charconv>, which MSVC's STL does not pull in for it
vcpkg_replace_string("${SOURCE_PATH}/include/prometheus/core.h" "#include <array>" "#include <array>\n#include <charconv>")

file(COPY "${SOURCE_PATH}/include/prometheus" DESTINATION "${CURRENT_PACKAGES_DIR}/include")
vcpkg_install_copyright(FILE_LIST "${SOURCE_PATH}/LICENSE")
