# SPDX-License-Identifier: AGPL-3.0-or-later

if(SUG_BUILD_SERVER)
  find_path(MAKEID_INCLUDE_DIR MakeID.h REQUIRED)
  file(GLOB viet_sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/viet/src/*.cpp")
  add_library(viet STATIC ${viet_sources})
  target_include_directories(viet
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/viet/include" "${MAKEID_INCLUDE_DIR}"
    PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/viet/src"
  )
  target_link_libraries(viet PUBLIC spdlog::spdlog)
  sug_target_defaults(viet)
endif()

file(GLOB serialization_sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/serialization/src/*.cpp")
add_library(serialization STATIC ${serialization_sources})
target_include_directories(serialization PUBLIC
  "${CMAKE_CURRENT_SOURCE_DIR}/serialization/include"
  "${CMAKE_CURRENT_SOURCE_DIR}/serialization/src"
)
target_link_libraries(serialization PUBLIC SLikeNet simdjson::simdjson nlohmann_json::nlohmann_json spdlog::spdlog)
sug_target_defaults(serialization)

file(GLOB protocol_sources CONFIGURE_DEPENDS
  "${CMAKE_CURRENT_SOURCE_DIR}/protocol/messages/*.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/protocol/wire_types/*.cpp"
)
add_library(protocol STATIC ${protocol_sources})
target_include_directories(protocol PUBLIC
  "${CMAKE_CURRENT_SOURCE_DIR}/protocol"
  "${CMAKE_CURRENT_SOURCE_DIR}/protocol/messages"
  "${CMAKE_CURRENT_SOURCE_DIR}/protocol/wire_types"
  "${CMAKE_CURRENT_SOURCE_DIR}/protocol/mp_common"
)
target_link_libraries(protocol PUBLIC serialization fmt::fmt)
sug_target_defaults(protocol)
