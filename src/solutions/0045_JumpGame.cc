#include "solution.h"

using std::vector;

int Solution::jump(vector<int> &nums)
{
  if (nums.size() <= 1)
    return 0;

  int step = 0;
  int next = 0;
  int target = 0;

  for (int i = 0; i < nums.size(); i++)
  {
    next = MAX(next, i + nums[i]);
    if (i == target || next >= nums.size() - 1)
    {
      step++;
      target = next;
    }

    if (next >= nums.size() - 1)
      return step;
  }
  return step;
}
