#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0042_TrapRainWater)
  {
    int expected = 6;
    std::vector<int> input = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int output = Instance().trap(input);
    EXPECT_EQ(expected, output);
  }
}
