ADD_EXECUTABLE(unitTest unitTest.cpp)
TARGET_LINK_LIBRARIES(unitTest GTest::GTest GTest::Main support solution)

ADD_TEST(all unitTest)
