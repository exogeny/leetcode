#include "solution.h"

using std::vector;

// Runtime: 20 ms, faster than 79.50%
// Memory Usage: 13 MB, less than 48.60%

bool Solution::canJump(vector<int> &nums)
{
  int index = nums.size() - 1;
  int last = index;

  while (index >= 0)
  {
    if (nums[index] + index >= last)
      last = index;
    index--;
  }
  return last == 0;
}
