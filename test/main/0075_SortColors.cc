#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0075_SortColors)
  {
    std::vector<int> input = {2, 0, 2, 1, 1, 0};
    std::vector<int> expect = {0, 0, 1, 1, 2, 2};
    Instance().sortColors(input);
    EXPECT_EQ(expect, input);
  }
} // namespace LeetcodeTest
