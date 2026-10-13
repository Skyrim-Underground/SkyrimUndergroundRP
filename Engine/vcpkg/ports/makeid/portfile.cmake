# SPDX-License-Identifier: AGPL-3.0-or-later

# Accepted hashes: the vendored header checked out with CRLF and with LF line endings.
file(SHA512 "${CMAKE_CURRENT_LIST_DIR}/MakeID.h" makeid_sha512)
if(NOT makeid_sha512 STREQUAL "b4993d53cd2b7f967982fb3a2277070a58b7f80528cffd6588280dea2e919dce710174a9a56e46a1b978786831a14bb8a9b49f93b93aa09ddcf097deb2ea73fe"
   AND NOT makeid_sha512 STREQUAL "cb5fffe9958915da46ada56e478c118c53e90f0ec9cfe72d992acf4b5e8353d917b44ca260f91e145eb46468357adc792bb1da48fb21d0fbec64efb27c3375b6")
  message(FATAL_ERROR "Unexpected SHA512 for MakeID.h: ${makeid_sha512}")
endif()

file(INSTALL "${CMAKE_CURRENT_LIST_DIR}/MakeID.h" DESTINATION "${CURRENT_PACKAGES_DIR}/include")
file(WRITE "${CURRENT_PACKAGES_DIR}/share/${PORT}/copyright"
  "MakeID.h by Emil Persson (Humus), http://www.humus.name\nLicense: Public Domain (see the header's License section)\n")
