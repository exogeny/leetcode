#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0059_SpiralMatrix)
  {
    std::vector<std::vector<int>> expected = {
      {1, 2, 3}, {8, 9, 4}, {7, 6, 5}};
    EXPECT_EQ(expected, Instance().generateMatrix(3));
  }
}
