cmake_minimum_required(VERSION 3.10)

project(CMakeProjectStructure)

set(CMAKE_MINIMUM_REQUIRED_VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY
		${CMAKE_BINARY_DIR}/bin)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY
		${CMAKE_BINARY_DIR}/bin)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY
		${CMAKE_BINARY_DIR}/bin)

set(CMPS_BUSINESS
		Cmps.Business)

set(CMPS_BUSINESS_VERSION
		1.0.0)

set(CMPS_DATA
		Cmps.Data)

set(CMPS_DATA_VERSION
		1.0.0)

set(CMPS_CONSOLE
		Cmps.Console)

set(CMPS_CONSOLE_VERSION
		1.0.0)

add_subdirectory(src/${CMPS_BUSINESS})
add_subdirectory(src/${CMPS_DATA})
add_subdirectory(src/${CMPS_CONSOLE})