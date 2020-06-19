#include "solution.h"
#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(longestValidParentheses_1)
  {
    std::string s = "(()";
    int result = Instance().longestValidParentheses(s);
    EXPECT_EQ(2, result);
  }

  LEETCODE_TEST(longestValidParentheses_2)
  {
    std::string s = ")()()(";
    int result = Instance().longestValidParentheses(s);
    EXPECT_EQ(4, result);
  }

  LEETCODE_TEST(longestValidParentheses_3)
  {
    std::string s = "()(()";
    int result = Instance().longestValidParentheses(s);
    EXPECT_EQ(2, result);
  }

    LEETCODE_TEST(longestValidParentheses_4)
  {
    std::string s = "()(())";
    int result = Instance().longestValidParentheses(s);
    EXPECT_EQ(6, result);
  }
}
