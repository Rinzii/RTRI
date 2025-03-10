cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(RTRI)

include(cmake/func/AddTargetSource.cmake)

add_library(RTRI)

target_include_directories(RTRI SYSTEM PUBLIC include)

add_subdirectory(src)

