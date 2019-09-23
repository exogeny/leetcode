#include <iostream>
#include <vector>

#include "solution.hpp"
#include "support.hpp"

#include <gtest/gtest.h>

using std::string;

namespace
{
  TEST(Solution, StringtoInteger_1)
  {
    Solution s;
    string input = "42";
    int res = s.myAtoi(input);
    EXPECT_EQ(42, res);
  }

  TEST(Solution, StringtoInteger_2)
  {
    Solution s;
    string input = "   -42";
    int res = s.myAtoi(input);
    EXPECT_EQ(-42, res);
  }

  TEST(Solution, StringtoInteger_3)
  {
    Solution s;
    string input = "4193 with words";
    int res = s.myAtoi(input);
    EXPECT_EQ(4193, res);
  }

  TEST(Solution, StringtoInteger_4)
  {
    Solution s;
    string input = "words and 987";
    int res = s.myAtoi(input);
    EXPECT_EQ(0, res);
  }

  TEST(Solution, StringtoInteger_5)
  {
    Solution s;
    string input = "-91283472332";
    int res = s.myAtoi(input);
    EXPECT_EQ(-2147483648, res);
  }
}
