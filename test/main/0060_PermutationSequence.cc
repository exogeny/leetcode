#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0060_PermutationSequence)
  {
    EXPECT_EQ("132", Instance().getPermutation(3, 2));
    EXPECT_EQ("213", Instance().getPermutation(3, 3));
    EXPECT_EQ("2314", Instance().getPermutation(4, 9));
    EXPECT_EQ("1234", Instance().getPermutation(4, 1));
    EXPECT_EQ("2431", Instance().getPermutation(4, 12));
  }
}
