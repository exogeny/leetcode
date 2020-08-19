#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0045_JumpGame)
  {
    std::vector<int> input = {2, 3, 1, 1, 4};
    EXPECT_EQ(2, Instance().jump(input));
  }
}
