cmake_minimum_required(VERSION 3.15)
project(DummyWILProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(dummy main.cpp)

# Point directly at WIL headers
target_include_directories(dummy PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/external/wil/include
)
