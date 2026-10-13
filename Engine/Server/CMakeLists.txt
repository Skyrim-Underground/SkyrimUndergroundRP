# SPDX-License-Identifier: AGPL-3.0-or-later

find_package(ZLIB REQUIRED)
find_package(antigo CONFIG REQUIRED)
find_package(bsa CONFIG REQUIRED)
find_package(mongocxx CONFIG REQUIRED)
find_package(CMakeRC CONFIG REQUIRED)
find_package(unofficial-node-addon-api CONFIG REQUIRED)
find_path(PROMETHEUS_CPP_LITE_INCLUDE_DIR prometheus/core.h REQUIRED)

file(GLOB espm_sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/libespm/src/*.cpp")
add_library(espm STATIC ${espm_sources})
target_include_directories(espm PUBLIC
  "${CMAKE_CURRENT_SOURCE_DIR}/libespm/include"
  "${CMAKE_CURRENT_SOURCE_DIR}/libespm/src"
)
# ZLIB is PUBLIC because the public header libespm/ZlibUtils.h includes zlib.h.
target_link_libraries(espm PUBLIC viet ZLIB::ZLIB spdlog::spdlog)
sug_target_defaults(espm)

file(GLOB papyrus_vm_sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/papyrus-vm/src/papyrus-vm-lib/*.cpp")
add_library(papyrus-vm-lib STATIC ${papyrus_vm_sources})
target_include_directories(papyrus-vm-lib PUBLIC
  "${CMAKE_CURRENT_SOURCE_DIR}/papyrus-vm/include"
  "${CMAKE_CURRENT_SOURCE_DIR}/papyrus-vm/src"
)
target_link_libraries(papyrus-vm-lib PUBLIC viet spdlog::spdlog)
sug_target_defaults(papyrus-vm-lib)

add_library(geo STATIC "${CMAKE_CURRENT_SOURCE_DIR}/geo/ConvexPolyhedron.cpp")
target_include_directories(geo PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/geo")
sug_target_defaults(geo)

file(GLOB localization_provider_sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/localization_provider/*.cpp")
add_library(localization-provider STATIC ${localization_provider_sources})
target_include_directories(localization-provider PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/localization_provider")
sug_target_defaults(localization-provider)

file(GLOB mp_common_sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/mp_common/*.cpp")
add_library(mp_common STATIC ${mp_common_sources})
target_compile_definitions(mp_common PUBLIC MAX_PLAYERS=1000)
target_include_directories(mp_common PUBLIC
  "${CMAKE_CURRENT_SOURCE_DIR}/mp_common"
  "${PROMETHEUS_CPP_LITE_INCLUDE_DIR}"
  "${MAKEID_INCLUDE_DIR}"
)
target_link_libraries(mp_common PUBLIC protocol spdlog::spdlog fmt::fmt ws2_32)
sug_target_defaults(mp_common)

# skymp's 133 Papyrus stubs, embedded and served by AssetsScriptStorage after the other script sources.
file(GLOB standard_scripts CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/standard_scripts/*.pex")
cmrc_add_resource_library(server_standard_scripts ${standard_scripts} NAMESPACE server_standard_scripts)
sug_target_defaults(server_standard_scripts)

file(GLOB_RECURSE server_guest_lib_sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/server_guest_lib/*.cpp")
add_library(server_guest_lib STATIC ${server_guest_lib_sources})
target_include_directories(server_guest_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/server_guest_lib")
target_link_libraries(server_guest_lib PUBLIC
  viet mp_common espm papyrus-vm-lib geo serialization protocol server_standard_scripts
  antigo::antigo bsa::bsa
  mongo::mongocxx_static mongo::bsoncxx_static mongoc::static bson::static
  nlohmann_json::nlohmann_json simdjson::simdjson spdlog::spdlog
  Secur32 Crypt32 Dnsapi Bcrypt
)
sug_target_defaults(server_guest_lib)

file(GLOB_RECURSE scam_native_sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/addon/*.cpp")
add_library(scam_native SHARED ${scam_native_sources} "${CMAKE_CURRENT_SOURCE_DIR}/addon/main.cc")
# $<0:> stops multi-config generators from adding a Debug/ or Release/ subfolder.
set_target_properties(scam_native PROPERTIES
  SUFFIX .node
  RUNTIME_OUTPUT_DIRECTORY "${SUG_BIN_DIR}/server/$<0:>"
  PDB_OUTPUT_DIRECTORY "${SUG_BIN_DIR}/server/$<0:>"
)
target_include_directories(scam_native PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/addon")
target_compile_definitions(scam_native PRIVATE NAPI_CPP_EXCEPTIONS)
target_link_libraries(scam_native PRIVATE
  server_guest_lib mp_common localization-provider
  unofficial::node-addon-api::node-addon-api antigo::antigo
)
sug_target_defaults(scam_native)

find_program(NPM_EXECUTABLE NAMES npm.cmd npm REQUIRED)
set(host_dir "${CMAKE_CURRENT_SOURCE_DIR}/host")
file(GLOB_RECURSE server_host_sources CONFIGURE_DEPENDS "${host_dir}/ts/*.ts")
# npm writes node_modules/.package-lock.json on every install, so it is the stamp of npm ci.
add_custom_command(
  OUTPUT "${host_dir}/node_modules/.package-lock.json"
  COMMAND "${NPM_EXECUTABLE}" ci --no-audit --no-fund
  WORKING_DIRECTORY "${host_dir}"
  DEPENDS "${host_dir}/package-lock.json"
  VERBATIM
)
add_custom_command(
  OUTPUT "${SUG_BIN_DIR}/server/skymp5-server.js" "${SUG_BIN_DIR}/server/skymp5-server.js.map"
  COMMAND "${NPM_EXECUTABLE}" run build
  WORKING_DIRECTORY "${host_dir}"
  DEPENDS ${server_host_sources} "${host_dir}/package.json" "${host_dir}/tsconfig.json" "${host_dir}/node_modules/.package-lock.json"
  VERBATIM
)
add_custom_target(server_host ALL DEPENDS "${SUG_BIN_DIR}/server/skymp5-server.js")
