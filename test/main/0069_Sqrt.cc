#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0069_Sqrt)
  {
    EXPECT_EQ(1, Instance().mySqrt(1));
    EXPECT_EQ(2, Instance().mySqrt(4));
    EXPECT_EQ(2, Instance().mySqrt(8));
  }
} // namespace LeetcodeTest

