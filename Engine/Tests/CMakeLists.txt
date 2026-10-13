# SPDX-License-Identifier: AGPL-3.0-or-later

find_package(Catch2 3 CONFIG REQUIRED)

file(GLOB unit_sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/unit/*.cpp")
add_executable(unit ${unit_sources} "${CMAKE_CURRENT_SOURCE_DIR}/mp_common/NetworkingMock.cpp")
target_include_directories(unit PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/unit" "${CMAKE_CURRENT_SOURCE_DIR}/mp_common")
target_link_libraries(unit PRIVATE server_guest_lib espm sug_net_core Catch2::Catch2)
target_compile_definitions(unit PRIVATE BUILT_PEX_DIR=\"${CMAKE_CURRENT_SOURCE_DIR}/unit/papyrus_test_files/pex\")
target_compile_options(unit PRIVATE /bigobj)
sug_target_defaults(unit)

# The networking tests bind 127.0.0.1:7778; some tests write relative paths such as unit/data.
add_test(NAME unit COMMAND unit)
set_tests_properties(unit PROPERTIES
  WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
  TIMEOUT 1800
  RESOURCE_LOCK udp_7778
)
# Only when set: an empty value would override SUG_SKYRIM_DATA_DIR from ctest's own environment.
if(SUG_SKYRIM_DATA_DIR)
  set_tests_properties(unit PROPERTIES ENVIRONMENT "SUG_SKYRIM_DATA_DIR=${SUG_SKYRIM_DATA_DIR}")
endif()

add_executable(geo_tests "${CMAKE_CURRENT_SOURCE_DIR}/geo/GeoTest.cpp")
target_link_libraries(geo_tests PRIVATE geo Catch2::Catch2WithMain)
sug_target_defaults(geo_tests)
add_test(NAME geo COMMAND geo_tests)

# Binds 127.0.0.1:7781 and loads bin/client/sug_net.dll.
add_executable(net_loopback_tests "${CMAKE_CURRENT_SOURCE_DIR}/loopback/ProtocolLoopbackTest.cpp")
target_link_libraries(net_loopback_tests PRIVATE sug_net_core mp_common Catch2::Catch2WithMain)
target_compile_definitions(net_loopback_tests PRIVATE SUG_NET_DLL_PATH=\"$<TARGET_FILE:sug_net>\")
add_dependencies(net_loopback_tests sug_net)
sug_target_defaults(net_loopback_tests)
add_test(NAME net_loopback COMMAND net_loopback_tests)

# Boots the dev server from bin/server (UDP 127.0.0.1:7790) against the masters in SUG_SKYRIM_DATA_DIR.
if(SUG_SKYRIM_DATA_DIR)
  find_program(NODE_EXECUTABLE NAMES node REQUIRED)
  add_test(NAME server_boot_smoke COMMAND "${NODE_EXECUTABLE}" "${CMAKE_CURRENT_SOURCE_DIR}/smoke/boot-smoke.mjs")
  set_tests_properties(server_boot_smoke PROPERTIES
    LABELS smoke
    TIMEOUT 300
    ENVIRONMENT "SUG_SKYRIM_DATA_DIR=${SUG_SKYRIM_DATA_DIR}"
  )
else()
  message(STATUS "server_boot_smoke is not registered: SUG_SKYRIM_DATA_DIR is not set")
endif()
