#include "202008.h"
#include <gtest/gtest.h>

namespace ChallengeTest
{
  TEST(CHALLENGE, 202008_15_WordDictionary)
  {
    Challenge::WordDictionary dict;
    dict.addWord("bad");
    dict.addWord("dad");
    dict.addWord("mad");
    EXPECT_FALSE(dict.search("pad"));
    EXPECT_TRUE(dict.search("bad"));
    EXPECT_TRUE(dict.search(".ad"));
    EXPECT_TRUE(dict.search("b.."));
    EXPECT_TRUE(dict.search("..."));
    EXPECT_FALSE(dict.search("..a"));
    EXPECT_FALSE(dict.search("."));
    EXPECT_FALSE(dict.search("badd"));
  }
}