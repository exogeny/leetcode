#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0064_MinimumPathSum)
  {
    std::vector<std::vector<int>> grids = {
      {1, 3, 1},
      {1, 5, 1},
      {4, 2, 1}
    };
    EXPECT_EQ(7, Instance().minPathSum(grids));
  }
}
