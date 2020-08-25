#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0074_SearchMatrix_Pos)
  {
    std::vector<std::vector<int>> matrix = {
      {1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 50}};
    EXPECT_TRUE(Instance().searchMatrix(matrix, 3));
  }

  LEETCODE_TEST(0074_SearchMatrix_Neg)
  {
    std::vector<std::vector<int>> matrix = {
      {1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 50}};
    EXPECT_FALSE(Instance().searchMatrix(matrix, 13));
  }
} // namespace LeetcodeTest
