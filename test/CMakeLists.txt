cmake_minimum_required(VERSION 2.8)
include_directories(${CMAKE_SOURCE_DIR})
add_subdirectory(gtest)

add_definitions("-Wall -std=c++11")
set(CMAKE_EXE_LINKER_FLAGS "-pthread")

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    add_definitions("-fprofile-arcs -ftest-coverage")
    set(CMAKE_EXE_LINKER_FLAGS "-pthread -lgcov --coverage")
endif()

add_executable(Test MathTest.cpp)
target_link_libraries(Test gtest)

