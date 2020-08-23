#include "202008.h"
#include <gtest/gtest.h>

namespace ChallengeTest
{
  TEST(CHALLENGE, 202008_12_HashSet)
  {
    Challenge::MyHashSet hashSet;
    hashSet.add(1);
    hashSet.add(2);
    EXPECT_TRUE(hashSet.contains(1));   // returns true
    EXPECT_FALSE(hashSet.contains(3));  // returns false (not found)
    hashSet.add(2);
    EXPECT_TRUE(hashSet.contains(2));   // returns true
    hashSet.remove(2);
    EXPECT_FALSE(hashSet.contains(2));  // returns false (already removed)
  }
}
