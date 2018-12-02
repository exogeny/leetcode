ADD_EXECUTABLE(unitTest unitTest.cpp)
TARGET_LINK_LIBRARIES(unitTest gtest gtest_main support solution)

ADD_TEST(all unitTest)
