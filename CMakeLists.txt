cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(leetcode)

enable_testing()

##### Compiler Flags #####
IF(CMAKE_COMPILER_IS_GNUCXX)
  IF(DEBUG)
    SET(CMAKE_CXX_FLAGS "-g -O0 -fPIC -lstdc++ -Wall")
    SET(CMAKE_C_FLAGS "-g -O0 -fPIC -Wall")
  ELSE(DEBUG)
    SET(CMAKE_CXX_FLAGS "-g -O3 -fPIC -lstdc++ -Wall")
    SET(CMAKE_C_FLAGS "-g -O3 -fPIC -Wall")
  ENDIF(DEBUG)
ENDIF(CMAKE_COMPILER_IS_GNUCXX)

IF (CMAKE_VERSION VERSION_LESS "3.1")
  IF (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    SET (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")
  ENDIF()
ELSE()
  SET(CMAKE_CXX_STANDARD 11)
ENDIF()

##### Package Dependencies #####
include(UseDoxygen OPTIONAL)

##### External dependencies
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/external)

# Location where external projects will be downloaded
set(DOWNLOAD_LOCATION "${CMAKE_CURRENT_BINARY_DIR}/downloads"
    CACHE PATH "Location where external projects will be downloaded.")
mark_as_advanced(DOWNLOAD_LOCATION)

include(googletest)

include_directories(include)

##### Subdirectories #####
add_subdirectory(src)
add_subdirectory(test)

