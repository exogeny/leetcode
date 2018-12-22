# Just use the FILE(GLOB ...) for wildcard solutions folder
FILE(GLOB TESTS "*.cc")
ADD_EXECUTABLE(unitTest ${TESTS})

include_directories(${googletest_INCLUDE_DIRS})

TARGET_LINK_LIBRARIES(unitTest ${googletest_STATIC_LIBRARIES})
TARGET_LINK_LIBRARIES(unitTest solution)

IF(CMAKE_COMPILER_IS_GNUCXX)
    TARGET_LINK_LIBRARIES(unitTest pthread)
ENDIF(CMAKE_COMPILER_IS_GNUCXX)

ADD_TEST(all unitTest)
