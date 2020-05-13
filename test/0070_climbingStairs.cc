#include "solution.h"
#include "support.h"
#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(climbStairs)
  {
    EXPECT_EQ(3, Instance().climbStairs(3));
    EXPECT_EQ(10946, Instance().climbStairs(20));
  }
} // namespace LeetcodeTest
