#include "solution.h"
#include "support.h"
#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(searchInsert)
  {
    int n[] = {1, 3, 5, 6};
    std::vector<int> nums(n, n + 4);

    EXPECT_EQ(2, Instance().searchInsert(nums, 5));
    EXPECT_EQ(1, Instance().searchInsert(nums, 2));
    EXPECT_EQ(4, Instance().searchInsert(nums, 7));
    EXPECT_EQ(0, Instance().searchInsert(nums, 0));
  }
} // namespace LeetcodeTest
