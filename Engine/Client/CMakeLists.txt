# SPDX-License-Identifier: AGPL-3.0-or-later

add_library(sug_net_core STATIC
  "${CMAKE_CURRENT_SOURCE_DIR}/net/mp_common/MpClientPlugin.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/net/mp_common/NetworkingClient.cpp"
)
target_include_directories(sug_net_core PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/net/mp_common")
target_link_libraries(sug_net_core PUBLIC protocol ws2_32)
sug_target_defaults(sug_net_core)

add_library(sug_net SHARED "${CMAKE_CURRENT_SOURCE_DIR}/net/client/main.cpp")
target_link_libraries(sug_net PRIVATE sug_net_core)
# $<0:> stops multi-config generators from adding a Debug/ or Release/ subfolder.
set_target_properties(sug_net PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY "${SUG_BIN_DIR}/client/$<0:>"
  PDB_OUTPUT_DIRECTORY "${SUG_BIN_DIR}/client/$<0:>"
)
sug_target_defaults(sug_net)
