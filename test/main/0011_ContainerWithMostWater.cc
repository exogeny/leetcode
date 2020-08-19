#include "solution.h"
#include "support.h"
#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(maxArea)
  {
    std::vector<int> input({1, 8, 6, 2, 5, 4, 8, 3, 7});
    EXPECT_EQ(49, Instance().maxArea(input));
  }
} // namespace LeetcodeTest\n
