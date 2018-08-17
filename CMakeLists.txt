cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(leetcode)

enable_testing()

#Note: Eclipse automatically picks up include paths with this on!
SET(CMAKE_VERBOSE_MAKEFILE ON)

##### Compiler Flags #####
IF(CMAKE_COMPILER_IS_GNUCXX)
	IF(DEBUG)
		SET(CMAKE_CXX_FLAGS "-g -O0 -fPIC -Wall ${OpenMP_CXX_FLAGS}  -DJSON_SAFE -DJSON_DEBUG" )
		SET(CMAKE_C_FLAGS "-g -O0 -fPIC -Wall ${OpenMP_C_FLAGS}  -DJSON_SAFE -DJSON_DEBUG" )
	ELSE(DEBUG)
		SET(CMAKE_CXX_FLAGS "-g -O3 -fPIC -Wall -fexpensive-optimizations ${OpenMP_CXX_FLAGS}" )
		SET(CMAKE_C_FLAGS "-g -O3 -fPIC -Wall -fexpensive-optimizations ${OpenMP_C_FLAGS}" )
	ENDIF(DEBUG)
ENDIF(CMAKE_COMPILER_IS_GNUCXX)

SET(CMAKE_CXX_STANDARD 11)

##### Package Dependencies #####
include(UseDoxygen OPTIONAL)

FIND_PACKAGE(GTest REQUIRED)

include_directories(include)

##### Subdirectories #####
add_subdirectory(src)
add_subdirectory(test)

