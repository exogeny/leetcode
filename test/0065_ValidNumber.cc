#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0065_ValidNumber)
  {
    EXPECT_TRUE(Instance().isNumber("0"));
    EXPECT_TRUE(Instance().isNumber(" 0.1"));
    EXPECT_FALSE(Instance().isNumber("abc"));
    EXPECT_FALSE(Instance().isNumber("1 a"));
    EXPECT_TRUE(Instance().isNumber("2e10"));
    EXPECT_TRUE(Instance().isNumber(" -90e3"));
    EXPECT_FALSE(Instance().isNumber(" 1e"));
    EXPECT_FALSE(Instance().isNumber("e3"));
    EXPECT_TRUE(Instance().isNumber(" 6e-1"));
    EXPECT_FALSE(Instance().isNumber(" 99e2.5  "));
    EXPECT_TRUE(Instance().isNumber("53.5e93 "));
    EXPECT_FALSE(Instance().isNumber(" --6 "));
    EXPECT_FALSE(Instance().isNumber("-+3"));
    EXPECT_FALSE(Instance().isNumber("95a54e53"));
  }
} // namespace LeetcodeTest
