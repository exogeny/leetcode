#include "solution.h"
#include "support.h"
#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(twoSum)
  {
    size_t i;
    int target = 9;
    std::vector<int> nums = {2, 7, 11, 19};

    std::vector<int> expected = {0, 1};
    std::vector<int> actual = Instance().twoSum(nums, target);

    EXPECT_EQ(expected.size(), actual.size());
    for (i = 0; i < expected.size() && i < actual.size(); i++)
    {
      EXPECT_EQ(expected[i], actual[i]);
    }
  }
} // namespace LeetcodeTest
