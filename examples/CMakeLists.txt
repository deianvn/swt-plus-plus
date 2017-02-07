cmake_minimum_required(VERSION 3.6)
project(examples)
set(CMAKE_CXX_STANDARD 14)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/../include)
include_directories("${PROJECT_INCLUDE_DIR}")

add_executable(window window.cpp)
target_link_libraries (window LINK_PUBLIC swt++)

add_executable(win32 win32.cpp)
