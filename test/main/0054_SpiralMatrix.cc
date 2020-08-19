#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0054_SpiralMatrix_1)
  {
    std::vector<std::vector<int>> input = {
      {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::vector<int> expect = {1, 2, 3, 6, 9, 8, 7, 4, 5};
    EXPECT_EQ(expect, Instance().spiralOrder(input));
  }

  LEETCODE_TEST(0054_SpiralMatrix_2)
  {
    std::vector<std::vector<int>> input = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    std::vector<int> expect = {1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7};
    EXPECT_EQ(expect, Instance().spiralOrder(input));
  }

  LEETCODE_TEST(0054_SpiralMatrix_3)
  {
    std::vector<std::vector<int>> input = {
      {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    std::vector<int> expect = {1, 2, 3, 6, 9, 12, 11, 10, 7, 4, 5, 8};
    EXPECT_EQ(expect, Instance().spiralOrder(input));
  }
}
