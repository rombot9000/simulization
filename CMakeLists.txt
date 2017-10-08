cmake_minimum_required (VERSION 3.9.4)
project (Simulization)

#Set version
set (Simulization_VERSION_MAJOR 0)
set (Simulization_VERSION_MINOR 1)

#Set dirs
set (PROJECT_SOURCE_DIR ${CMAKE_SOURCE_DIR}/source)
set (PROJECT_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})

#Configure headers
configure_file ("${CMAKE_SOURCE_DIR}/Config.h.in" "${PROJECT_BINARY_DIR}/Config.h")

#Include dirs
include_directories("${PROJECT_BINARY_DIR}")

#Add executable
add_executable(Simulization ${PROJECT_SOURCE_DIR}/main.cpp)
