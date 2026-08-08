cmake_minimum_required(VERSION 3.20)

project(
    High_Performance_Lib
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)

FetchContent_MakeAvailable(googletest)

add_subdirectory(containers)
        #TODO
#[[
    add_subdirectory(algorithms)
    add_subdirectory(chrono)
    add_subdirectory(concepts)
    add_subdirectory(concurrency)
    add_subdirectory(filesystem)
    add_subdirectory(iterators)
    add_subdirectory(memory)
    add_subdirectory(ranges)
    add_subdirectory(strings)
]]