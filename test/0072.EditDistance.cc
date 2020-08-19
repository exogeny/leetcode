#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0072_EditDistance_1)
  {
    EXPECT_EQ(3, Instance().minDistance("horse", "ros"));
  }

  LEETCODE_TEST(0072_EditDistance_2)
  {
    EXPECT_EQ(5, Instance().minDistance("intention", "execution"));
  }
} // namespace LeetcodeTest

