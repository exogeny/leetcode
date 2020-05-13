#include "solution.h"
#include "support.h"
#include "test.h"

namespace LeetcodeTest
{
  static inline void testIntegerRoman(int val, const std::string &expected)
  {
    std::string res = Instance().intToRoman(val);
    EXPECT_STREQ(expected.c_str(), res.c_str());
  }

  LEETCODE_TEST(IntegertoRoman_1)
  {
    testIntegerRoman(3, "III");
  }

  LEETCODE_TEST(IntegertoRoman_2)
  {
    testIntegerRoman(4, "IV");
  }

  LEETCODE_TEST(IntegertoRoman_3)
  {
    testIntegerRoman(9, "IX");
  }

  LEETCODE_TEST(IntegertoRoman_4)
  {
    testIntegerRoman(58, "LVIII");
  }

  LEETCODE_TEST(IntegertoRoman_5)
  {
    testIntegerRoman(1994, "MCMXCIV");
  }
} // namespace LeetcodeTest
