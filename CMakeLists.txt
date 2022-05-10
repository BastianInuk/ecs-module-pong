cmake_minimum_required(VERSION 3.20.0)

# WORKAROUND
# This is added so that CMake can recognize the .ixx extension as a module interface.
set(CMAKE_CXX_SYSROOT_FLAG_CODE "list(APPEND CMAKE_CXX_SOURCE_FILE_EXTENSIONS ixx)")

project(pong VERSION 0.1.0 LANGUAGES CXX)

# It is always easier to navigate in an IDE when projects are organized in folders.
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

include(CTest)
enable_testing()

find_package(sdl2 CONFIG REQUIRED)

add_executable(pong src/main.cpp modules/utils/out.ixx)

# add support for modules
target_compile_features(pong PRIVATE cxx_std_20)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
