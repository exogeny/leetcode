#include "solution.h"
#include "support.h"
#include "test.h"

using std::string;

namespace LeetcodeTest
{
  LEETCODE_TEST(StringtoInteger_1)
  {
    string input = "42";
    int res = Instance().myAtoi(input);
    EXPECT_EQ(42, res);
  }

  LEETCODE_TEST(StringtoInteger_2)
  {
    string input = "   -42";
    int res = Instance().myAtoi(input);
    EXPECT_EQ(-42, res);
  }

  LEETCODE_TEST(StringtoInteger_3)
  {
    string input = "4193 with words";
    int res = Instance().myAtoi(input);
    EXPECT_EQ(4193, res);
  }

  LEETCODE_TEST(StringtoInteger_4)
  {
    string input = "words and 987";
    int res = Instance().myAtoi(input);
    EXPECT_EQ(0, res);
  }

  LEETCODE_TEST(StringtoInteger_5)
  {
    string input = "-91283472332";
    int res = Instance().myAtoi(input);
    EXPECT_EQ(-2147483648, res);
  }
} // namespace LeetcodeTest
