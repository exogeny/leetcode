#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0063_UniquePaths)
  {
    std::vector<std::vector<int>> grids = {
      {0, 0, 0},
      {0, 1, 0},
      {0, 0, 0}
    };
    EXPECT_EQ(2, Instance().uniquePathsWithObstacles(grids));
  }
}
