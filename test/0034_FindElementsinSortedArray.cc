#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(FindElementsInSortedArray_1)
  {
    std::vector<int> input = {5, 7, 7, 8, 8, 10};
    int target = 8;
    std::vector<int> output = Instance().searchRange(input, target);
    EXPECT_EQ(2, output.size());
    EXPECT_EQ(3, output[0]);
    EXPECT_EQ(4, output[1]);
  }

  LEETCODE_TEST(FindElementsInSortedArray_2)
  {
    std::vector<int> input = {5, 7, 7, 8, 8, 10};
    int target = 9;
    std::vector<int> output = Instance().searchRange(input, target);
    EXPECT_EQ(2, output.size());
    EXPECT_EQ(-1, output[0]);
    EXPECT_EQ(-1, output[1]);
  }

  LEETCODE_TEST(FindElementsInSortedArray_3)
  {
    std::vector<int> input = {5, 6};
    int target = 5;
    std::vector<int> output = Instance().searchRange(input, target);
    EXPECT_EQ(2, output.size());
    EXPECT_EQ(0, output[0]);
    EXPECT_EQ(0, output[1]);
  }

  LEETCODE_TEST(FindElementsInSortedArray_4)
  {
    std::vector<int> input = {5};
    int target = 6;
    std::vector<int> output = Instance().searchRange(input, target);
    EXPECT_EQ(2, output.size());
    EXPECT_EQ(-1, output[0]);
    EXPECT_EQ(-1, output[1]);
  }

  LEETCODE_TEST(FindElementsInSortedArray_5)
  {
    std::vector<int> input = {5, 5, 5, 5, 5, 5};
    int target = 5;
    std::vector<int> output = Instance().searchRange(input, target);
    EXPECT_EQ(2, output.size());
    EXPECT_EQ(0, output[0]);
    EXPECT_EQ(5, output[1]);
  }
}
