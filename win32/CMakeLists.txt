cmake_minimum_required(VERSION 3.6)
project(swt-plus-plus-win32)
set(CMAKE_CXX_STANDARD 14)

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

set(SWTPP_SRCS
    ${PROJECT_SOURCE_DIR}/Resource.cpp
    ${PROJECT_SOURCE_DIR}/Device.cpp
    ${PROJECT_SOURCE_DIR}/Display.cpp
    ${PROJECT_SOURCE_DIR}/Device.cpp
    ${PROJECT_SOURCE_DIR}/Widget.cpp
    ${PROJECT_SOURCE_DIR}/Shell.cpp
)

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_INCLUDE_DIR}")

add_library(swt++ SHARED ${SWTPP_SRCS})
