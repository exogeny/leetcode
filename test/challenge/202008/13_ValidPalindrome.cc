#include "202008.h"
#include <gtest/gtest.h>

namespace ChallengeTest
{
  TEST(CHALLENGE, 202008_13_ValidPalindrome)
  {
    Challenge instance;
    EXPECT_TRUE(instance.isPalindrome("A man, a plan, a canal: Panama"));
    EXPECT_FALSE(instance.isPalindrome("race a car"));
    EXPECT_TRUE(instance.isPalindrome(
        "Marge, let's \"[went].\" I await {news} telegram."));
  }

} // namespace CHALLENGE_TEST

