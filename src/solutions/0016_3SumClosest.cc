#include "solution.h"
#include <algorithm>

using std::vector;

int Solution::threesumClosest(vector<int>& nums, int target)
{
  if (nums.size() < 3) return 0;
  sort(nums.begin(), nums.end());
  int result, sum, last, cur;

  vector<int>::iterator index = nums.begin();
  vector<int>::iterator end = nums.end();
  vector<int>::iterator left = index + 1;
  vector<int>::iterator right = end - 1;
  result = *index + *left + *right;
  result = ABS(result - target);

  while (index < end - 1)
  {
    while (left < right)
    {
      sum = *index + *left + *right;
      cur = ABS(sum - target);
      if (cur < last)
      {
        result = sum;
        last = cur;
      }

      if (sum < target)
      {
        while (left < right && *left == *(left + 1))
        {
          left++;
        }
        left++;
      }
      else if (sum > target)
      {
        while (left < right && *right == *(right - 1))
        {
          right--;
        }
        right--;
      }
      else
      {
        return target;
      }
    }

    while (index < end - 1 && *index == *(index+1))
    {
      index++;
    }
    index = index + 1;
    left = index + 1;
    right = end - 1;
  }

  return result;
}
