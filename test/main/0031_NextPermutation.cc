#include "solution.h"
#include "support.h"
#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(NextPermutation_1)
  {
    std::vector<int> res = {1, 3, 2};
    std::vector<int> nums = {1, 2, 3};
    Instance().nextPermutation(nums);
    EXPECT_EQ(res, nums);
  }

  LEETCODE_TEST(NextPermutation_2)
  {
    std::vector<int> res = {1, 2, 3};
    std::vector<int> nums = {3, 2, 1};
    Instance().nextPermutation(nums);
    EXPECT_EQ(res, nums);
  }

  LEETCODE_TEST(NextPermutation_3)
  {
    std::vector<int> res = {5, 1, 1};
    std::vector<int> nums = {1, 5, 1};
    Instance().nextPermutation(nums);
    EXPECT_EQ(res, nums);
  }
}