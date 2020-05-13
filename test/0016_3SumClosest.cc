#include "solution.h"
#include "support.h"
#include "test.h"

using std::vector;
namespace LeetcodeTest
{
  LEETCODE_TEST(threesumClosest)
  {
    vector<int> nums = {-1, 2, 1, -4};
    int result = Instance().threesumClosest(nums, 1);
    EXPECT_EQ(2, result);
  }
} // namespace LeetcodeTest
