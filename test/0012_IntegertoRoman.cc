#include "solution.hpp"
#include "support.hpp"

#include <gtest/gtest.h>

namespace
{
using std::string;

TEST(Solution, IntegertoRoman_1)
{
  Solution s;
  string expected = "III";

  string result = s.intToRoman(3);
  EXPECT_STREQ(result.c_str(), expected.c_str());
}

TEST(Solution, IntegertoRoman_2)
{
  Solution s;
  string expected = "IV";

  string result = s.intToRoman(4);
  EXPECT_STREQ(result.c_str(), expected.c_str());
}

TEST(Solution, IntegertoRoman_3)
{
  Solution s;
  string expected = "IX";

  string result = s.intToRoman(9);
  EXPECT_STREQ(result.c_str(), expected.c_str());
}

TEST(Solution, IntegertoRoman_4)
{
  Solution s;
  string expected = "LVIII";

  string result = s.intToRoman(58);
  EXPECT_STREQ(result.c_str(), expected.c_str());
}

TEST(Solution, IntegertoRoman_5)
{
  Solution s;
  string expected = "MCMXCIV";

  string result = s.intToRoman(1994);
  EXPECT_STREQ(result.c_str(), expected.c_str());
}
}