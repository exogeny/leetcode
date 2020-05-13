#include "solution.h"
#include "support.h"
#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(addBinary_1)
  {
    EXPECT_EQ("100", Instance().addBinary("11", "1"));
  }

  LEETCODE_TEST(addBinary_2)
  {
    EXPECT_EQ("10101", Instance().addBinary("1010", "1011"));
  }
} // namespace LeetcodeTest
