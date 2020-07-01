#include <algorithm>
#include "solution.h"

using std::vector;

vector<vector<int>> Solution::fourSum(vector<int> &nums, int target)
{
  if (nums.size() < 4)
    return {};

  std::sort(nums.begin(), nums.end());

  int length = nums.size();
  vector<vector<int>> result;
  int cur_target, sum, left, right;
  int i = 0, j;

  while (i < length - 2)
  {
    j = i + 1;
    while (j < length - 1)
    {
      cur_target = target - nums[i] - nums[j];
      left = j + 1;
      right = length - 1;
      while (left < right)
      {
        sum = nums[left] + nums[right];
        if (sum == cur_target)
        {
          result.push_back({nums[i], nums[j], nums[left], nums[right]});
        }

        if (sum <= cur_target)
        {
          while (left < right && nums[left] == nums[left + 1])
            left++;
          left++;
        }

        if (sum >= cur_target)
        {
          while (left < right && nums[right] == nums[right - 1])
            right--;
          right--;
        }
      }

      while (j < length - 1 && nums[j] == nums[j + 1])
        j++;
      j++;
    }

    while (i < length - 2 && nums[i] == nums[i + 1])
      i++;
    i++;
  }
  return result;
}
