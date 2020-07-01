#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0018_FourSum)
  {
    std::vector<int> input = {1, 0, -1, 0, -2, 2};
    int target = 0;
    std::vector<std::vector<int>> output = Instance().fourSum(input, target);
    std::vector<std::vector<int>> expect = {
      {-2, -1, 1, 2}, {-2, 0, 0, 2}, {-1, 0, 0, 1}};
    EXPECT_EQ(expect, output);
  }
}
