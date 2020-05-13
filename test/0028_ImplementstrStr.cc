#include "solution.h"
#include "support.h"
#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(strStr_found)
  {
    EXPECT_EQ(2, Instance().strStr("hello", "ll"));
  }

  LEETCODE_TEST(strStr_not_found)
  {
    EXPECT_EQ(-1, Instance().strStr("aaaaa", "aab"));
  }
} // namespace LeetcodeTest
