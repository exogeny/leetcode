#include "202008.h"
#include <gtest/gtest.h>

namespace ChallengeTest
{
  TEST(CHALLENGE, 202008_11_DetectCapital)
  {
    Challenge instance;
    EXPECT_TRUE(instance.detectCapitalUse("USA"));
    EXPECT_FALSE(instance.detectCapitalUse("FlaG"));
  }
}
