#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(SearchRotatedSortedArray_found)
  {
    std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int output = Instance().search(nums, 6);
    EXPECT_EQ(2, output);
  }

  LEETCODE_TEST(SearchRotatedSortedArray_not_found)
  {
    std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int output = Instance().search(nums, 3);
    EXPECT_EQ(-1, output);
  }

  LEETCODE_TEST(SearchRotatedSortedArray_found_hard1)
  {
    std::vector<int> nums = {5, 1, 3};
    int output = Instance().search(nums, 3);
    EXPECT_EQ(2, output);
  }

  LEETCODE_TEST(SearchRotatedSortedArray_found_hard2)
  {
    std::vector<int> nums = {7, 8, 9, 3, 4};
    int output = Instance().search(nums, 9);
    EXPECT_EQ(2, output);
  }
}
