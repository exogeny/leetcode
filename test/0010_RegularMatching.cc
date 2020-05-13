#include "solution.h"
#include "support.h"
#include "test.h"

namespace LeetcodeTest
{
  void matchTest(const std::string &expr,
                 const std::string &text,
                 bool expected)
  {
    if (expected)
      EXPECT_TRUE(Instance().isMatch(text, expr));
    else
      EXPECT_FALSE(Instance().isMatch(text, expr));
  }

  LEETCODE_TEST(regularExpressionMatching_True)
  {
    matchTest("a*", "aa", true);
    matchTest(".*", "ab", true);
    matchTest("c*a*b", "aab", true);
  }

  LEETCODE_TEST(regularExpressionMatching_False)
  {
    matchTest("a", "aa", false);
    matchTest("mis*is*p*.", "mississippi", false);
  }
} // namespace LeetcodeTest
