cmake_minimum_required (VERSION 3.9.4)
project (Simulization)

#Set version
set (Simulization_VERSION_MAJOR 0)
set (Simulization_VERSION_MINOR 1)

#Set c++ version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#Set dirs
set (PROJECT_SOURCE_DIR     "${CMAKE_SOURCE_DIR}/source")
set (PROJECT_BINARY_DIR     "${CMAKE_SOURCE_DIR}/bin")
set (EXECUTABLE_OUTPUT_PATH "${PROJECT_BINARY_DIR}")

#Configure headers
set (PROJECT_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")
configure_file ("${CMAKE_SOURCE_DIR}/Config.h.in" "${PROJECT_INCLUDE_DIR}/Config.h")

#Include dirs
include_directories ("${PROJECT_INCLUDE_DIR}")

#Include files
file (GLOB SOURCES "${PROJECT_SOURCE_DIR}/*.cpp")

#Add executable
add_executable(Simulization ${PROJECT_SOURCE_DIR}/Main.cpp ${SOURCES})
