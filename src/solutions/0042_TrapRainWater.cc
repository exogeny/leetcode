#include "solution.h"

using std::vector;

int Solution::trap(vector<int> &height)
{
  int ret = 0;
  int left = 0, right = height.size() - 1;
  int left_max = 0, right_max = 0;
  while (left < right)
  {
    if (height[left] < height[right])
    {
      if (height[left] >= left_max)
        left_max = height[left];
      else
        ret += (left_max - height[left]);
      left++;
    }
    else
    {
      if (height[right] >= right_max)
        right_max = height[right];
      else
        ret += (right_max - height[right]);
      right--;
    }
  }
  return ret;
}
