#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0029_Divide_1)
  {
    int dividend = 10;
    int divisor = 3;
    EXPECT_EQ(3, Instance().divide(dividend, divisor));
  }

  LEETCODE_TEST(0029_Divide_2)
  {
    int dividend = 7;
    int divisor = -3;
    EXPECT_EQ(-2, Instance().divide(dividend, divisor));
  }

  LEETCODE_TEST(0029_Divide_3)
  {
    int dividend = -2147483648;
    int divisor = -1;
    EXPECT_EQ(2147483647, Instance().divide(dividend, divisor));
  }

  LEETCODE_TEST(0029_Divide_4)
  {
    int dividend = -2147483648;
    int divisor = 2;
    EXPECT_EQ(-1073741824, Instance().divide(dividend, divisor));
  }
}
