# SPDX-License-Identifier: AGPL-3.0-or-later
cmake_minimum_required(VERSION 4.2)

option(SUG_BUILD_SERVER "Build the server; OFF builds only the protocol and the client transport" ON)
option(SUG_BUILD_TESTS "Build the tests" ON)

if(SUG_BUILD_SERVER)
  list(APPEND VCPKG_MANIFEST_FEATURES server)
endif()
if(SUG_BUILD_TESTS)
  list(APPEND VCPKG_MANIFEST_FEATURES tests)
endif()

project(SkyrimUndergroundRP LANGUAGES C CXX)

set(SUG_SKYRIM_DATA_DIR "$ENV{SUG_SKYRIM_DATA_DIR}" CACHE PATH "Skyrim Special Edition Data folder used by tests")
set(SUG_BIN_DIR "${PROJECT_SOURCE_DIR}/bin")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_SCAN_FOR_MODULES OFF)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "ProgramDatabase")

include(${PROJECT_SOURCE_DIR}/Engine/cmake/SugTargetDefaults.cmake)
if(SUG_BUILD_TESTS)
  enable_testing()
endif()
add_subdirectory(Engine)
