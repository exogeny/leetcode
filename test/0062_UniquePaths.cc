#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0062_UniquePaths)
  {
    EXPECT_EQ(3, Instance().uniquePaths(3, 2));
    EXPECT_EQ(28, Instance().uniquePaths(7, 3));
  }
}
