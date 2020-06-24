#include "solution.h"

using std::vector;

int Solution::firstMissingPositive(vector<int> &nums)
{
  for (int index = 0; index < nums.size(); index++)
  {
    if (nums[index] <= 0 || nums[index] == index + 1)
    {
      continue;
    }
    else if (nums[index] < index + 1)
    {
      nums[nums[index] - 1] = nums[index];
    }
    else
    {
      int val = nums[index], tmp;
      while (val > 0 && val <= nums.size() && nums[val - 1] != val)
      {
        tmp = nums[val - 1];
        nums[val - 1] = val;
        val = tmp;
      }
    }
  }

  int ret = 0;
  for (ret = 0; ret < nums.size(); ret++)
  {
    if (nums[ret] != ret + 1)
      break;
  }
  return ret + 1;
}
