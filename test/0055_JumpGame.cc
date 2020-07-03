#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0055_JumpGame_1)
  {
    std::vector<int> nums = {2, 3, 1, 1, 4};
    EXPECT_TRUE(Instance().canJump(nums));
  }

  LEETCODE_TEST(0055_JumpGame_2)
  {
    std::vector<int> nums = {3, 2, 1, 0, 4};
    EXPECT_FALSE(Instance().canJump(nums));
  }
}
