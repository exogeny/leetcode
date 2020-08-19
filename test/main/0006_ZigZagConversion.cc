#include "solution.h"
#include "support.h"
#include "test.h"

namespace LeetcodeTest
{
  static inline void testZigZagConversion(const std::string val,
                                          const std::string exp,
                                          int numRows)
  {
    std::string res = Instance().convert(val, numRows);
    EXPECT_STREQ(exp.c_str(), res.c_str());
  }

  LEETCODE_TEST(ZigZagConversion_1)
  {
    testZigZagConversion("PAYPALISHIRING", "PAHNAPLSIIGYIR", 3);
  }

  LEETCODE_TEST(ZigZagConversion_2)
  {
    testZigZagConversion("PAYPALISHIRING", "PINALSIGYAHRPI", 4);
  }
} // namespace LeetcodeTest
