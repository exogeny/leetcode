# Just use the FILE(GLOB ...) for wildcard solutions folder
FILE(GLOB TESTS "*.cc")
ADD_EXECUTABLE(unitTest ${TESTS})
ADD_DEPENDENCIES(unitTest googletest)

include_directories(${googletest_INCLUDE_DIRS})

TARGET_LINK_LIBRARIES(unitTest debug ${googletest_LIBRARIES_FOLDER}gtestd.${googletest_SUFFIX}
                               optimized ${googletest_LIBRARIES_FOLDER}gtest.${googletest_SUFFIX})
TARGET_LINK_LIBRARIES(unitTest debug ${googletest_LIBRARIES_FOLDER}gtest_maind.${googletest_SUFFIX}
                               optimized ${googletest_LIBRARIES_FOLDER}gtest_main.${googletest_SUFFIX})
TARGET_LINK_LIBRARIES(unitTest solution)

IF(CMAKE_COMPILER_IS_GNUCXX)
    TARGET_LINK_LIBRARIES(unitTest pthread)
ENDIF(CMAKE_COMPILER_IS_GNUCXX)

ADD_TEST(all unitTest)
