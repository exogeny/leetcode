#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0071_SimplifyPath_1)
  {
    EXPECT_EQ("/home", Instance().simplifyPath("/home/"));
  }

  LEETCODE_TEST(0071_SimplifyPath_2)
  {
    EXPECT_EQ("/", Instance().simplifyPath("/../"));
  }

  LEETCODE_TEST(0071_SimplifyPath_3)
  {
    EXPECT_EQ("/home/foo", Instance().simplifyPath("/home//foo/"));
  }

  LEETCODE_TEST(0071_SimplifyPath_4)
  {
    EXPECT_EQ("/c", Instance().simplifyPath("/a/./b/../../c/"));
  }

  LEETCODE_TEST(0071_SimplifyPath_5)
  {
    EXPECT_EQ("/c", Instance().simplifyPath("/a/../../b/../c//.//"));
  }

  LEETCODE_TEST(0071_SimplifyPath_6)
  {
    EXPECT_EQ("/a/b/c", Instance().simplifyPath("/a//b////c/d//././/.."));
  }

} // namespace LeetcodeTest

