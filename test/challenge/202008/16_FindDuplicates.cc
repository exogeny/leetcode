#include "202008.h"
#include "challenge.h"

namespace ChallengeTest
{
  CHALLENGE_TEST(202008_16_FindDuplicates)
  {
    Challenge instance;
    std::vector<int> inputs = {4, 3, 2, 7, 8, 2, 3, 1};
    std::vector<int> result = {2, 3};
    EXPECT_EQ(result, instance.findDuplicates(inputs));
  }
}