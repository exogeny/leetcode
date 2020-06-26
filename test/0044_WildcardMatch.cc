#include "test.h"

using std::string;

namespace LeetcodeTest
{
  LEETCODE_TEST(0044_WildcardMatch_1)
  {
    string s("aa"), p("a");
    EXPECT_FALSE(Instance().isMatch2(s, p));
  }

  LEETCODE_TEST(0044_WildcardMatch_2)
  {
    string s("aa"), p("*");
    EXPECT_TRUE(Instance().isMatch2(s, p));
  }

  LEETCODE_TEST(0044_WildcardMatch_3)
  {
    string s("cb"), p("?a");
    EXPECT_FALSE(Instance().isMatch2(s, p));
  }

  LEETCODE_TEST(0044_WildcardMatch_4)
  {
    string s("adceb"), p("*a*b");
    EXPECT_TRUE(Instance().isMatch2(s, p));
  }
}
