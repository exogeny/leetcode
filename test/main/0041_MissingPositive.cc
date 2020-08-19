#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0041_MissingPositive_1)
  {
    int expected = 3;
    std::vector<int> input = {1, 2, 0};
    int output = Instance().firstMissingPositive(input);
    EXPECT_EQ(expected, output);
  }

  LEETCODE_TEST(0041_MissingPositive_2)
  {
    int expected = 2;
    std::vector<int> input = {3, 4, -1, 1};
    int output = Instance().firstMissingPositive(input);
    EXPECT_EQ(expected, output);
  }

  LEETCODE_TEST(0041_MissingPositive_3)
  {
    int expected = 1;
    std::vector<int> input = {7, 8, 9, 11, 12};
    int output = Instance().firstMissingPositive(input);
    EXPECT_EQ(expected, output);
  }

  LEETCODE_TEST(0041_MissingPositive_4)
  {
    int expected = 3;
    std::vector<int> input = {2, 1};
    int output = Instance().firstMissingPositive(input);
    EXPECT_EQ(expected, output);
  }
}
