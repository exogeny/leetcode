#include "202008.h"
#include <gtest/gtest.h>

namespace ChallengeTest
{
  static Challenge c;

  TEST(CHALLENGE, 202008_27_LongestPalindrome_1)
  {
    std::string s = "abccccdd";
    EXPECT_EQ(7, c.longestPalindrome(s));
  }

  TEST(CHALLENGE, 202008_27_LongestPalindrome_2)
  {
    std::string s = "a";
    EXPECT_EQ(1, c.longestPalindrome(s));
  }

  TEST(CHALLENGE, 202008_27_LongestPalindrome_3)
  {
    std::string s = "Aa";
    EXPECT_EQ(1, c.longestPalindrome(s));
  }
}
