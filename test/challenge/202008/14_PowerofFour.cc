#include "202008.h"
#include "challenge.h"

namespace ChallengeTest
{
  CHALLENGE_TEST(202008_14_PowerofFour)
  {
    Challenge instance;
    EXPECT_FALSE(instance.isPowerOfFour(-2147483648));
    EXPECT_FALSE(instance.isPowerOfFour(0));
    EXPECT_TRUE(instance.isPowerOfFour(1));
    EXPECT_TRUE(instance.isPowerOfFour(4));
    EXPECT_FALSE(instance.isPowerOfFour(5));
    EXPECT_FALSE(instance.isPowerOfFour(8));
    EXPECT_TRUE(instance.isPowerOfFour(16));
  }
}