#include "solution.h"

using namespace std;

int Solution::search(vector<int> &nums, int target)
{
  int nums_size = nums.size();
  if (nums_size == 0)
    return -1;
  if (nums[0] == target)
    return 0;

  int index = 2;
  while (index < nums_size)
  {
    if (nums[index - 1] == target)
    {
      return index - 1;
    }
    if (nums[index / 2 - 1] > nums[index - 1])
    {
      if (nums[index - 1] > target || nums[index / 2 - 1] < target)
        break;
    }
    else if (nums[index / 2 - 1] < target && nums[index - 1] > target)
    {
      break;
    }
    index = index * 2;
  }

  index = index / 2;
  for (int begin = index - 1; begin < index * 2 && begin < nums_size; begin++)
  {
    if (nums[begin] == target)
    {
      return begin;
    }
  }

  return -1;
}
