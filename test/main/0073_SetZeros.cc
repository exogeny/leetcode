#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0073_SetZeros)
  {
    std::vector<std::vector<int>> inputs = {
      {1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    std::vector<std::vector<int>> outputs {
      {1, 0, 1}, {0, 0, 0}, {1, 0, 1}};
    Instance().setZeroes(inputs);
    EXPECT_EQ(outputs, inputs);
  }
} // namespace LeetcodeTest
