#include "202008.h"
#include "challenge.h"

namespace ChallengeTest
{
  CHALLENGE_TEST(202008_11_DetectCapital)
  {
    Challenge instance;
    EXPECT_TRUE(instance.detectCapitalUse("USA"));
    EXPECT_FALSE(instance.detectCapitalUse("FlaG"));
  }
}
