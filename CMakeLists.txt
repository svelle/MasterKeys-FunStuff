cmake_minimum_required(VERSION 3.8)
project(MasterKeys-FunStuff)

LINK_DIRECTORIES(${CMAKE_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp SDKDLL.h SetLedHelpers.h SetLedHelpers.cpp numPadSegments.cpp numPadSegments.h)
add_executable(MasterKeys-FunStuff ${SOURCE_FILES})
target_link_libraries(MasterKeys-FunStuff SDKDLL.lib)
