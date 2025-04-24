cmake_minimum_required(VERSION 3.30)
project(drone_system)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Debug)

include_directories(include)

file(GLOB_RECURSE SOURCES src/*.cpp)
list(APPEND SOURCES main.cpp)

add_executable(drone_system ${SOURCES}
        src/ThreadPool.cpp)

include(CTest)
enable_testing()