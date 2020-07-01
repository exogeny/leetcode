#include <algorithm>
#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0017_LetterCombinations)
  {
    std::string digits("23");
    std::vector<std::string> result = Instance().letterCombinations(digits);
    std::vector<std::string> expect = \
        {"ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"};
    std::sort(result.begin(), result.end());
    EXPECT_EQ(expect, result);
  }
}
