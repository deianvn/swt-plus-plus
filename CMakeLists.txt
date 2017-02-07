cmake_minimum_required(VERSION 3.5.1)
project(swt_plus_plus)
set(CMAKE_CXX_STANDARD 14)

if (WIN32)
    add_subdirectory(win32)
endif (WIN32)

if (UNIX)
    add_subdirectory(gtkmm)
endif (UNIX)

if (APPLE)
    add_subdirectory(cocoa)
endif (APPLE)

add_subdirectory(examples)
