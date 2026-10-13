# SPDX-License-Identifier: AGPL-3.0-or-later

# Imported targets are directory-scoped; finding them here makes them visible to every area below.
find_package(slikenet CONFIG REQUIRED)
find_package(simdjson CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)

add_subdirectory(Shared)
add_subdirectory(Client)
if(SUG_BUILD_SERVER)
  add_subdirectory(Server)
  if(SUG_BUILD_TESTS)
    add_subdirectory(Tests)
  endif()
endif()
