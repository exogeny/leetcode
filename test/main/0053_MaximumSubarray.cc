#include "solution.h"
#include "support.h"
#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(maxSubArray_1)
  {
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    EXPECT_EQ(6, Instance().maxSubArray(nums));
  }

  LEETCODE_TEST(maxSubArray_2)
  {
    std::vector<int> nums = {-2, 3, -2, 4, -1, -2, -1, 2, -1};
    EXPECT_EQ(5, Instance().maxSubArray(nums));
  }
} // namespace LeetcodeTest
