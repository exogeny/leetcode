#include "solution.h"

using std::vector;

// using Divide-and-Conquer algorithm
// Runtime: 12 ms, faster than 76.93%
// Memory Usage: 13.2 MB, less than 63.55%
static int maxSubArraywithIndex(vector<int> &nums, int left, int right)
{
  if (left == right)
    return nums[left];

  int i, sum;
  int mid = (left + right) / 2;
  int maxPadLeft = nums[mid], maxPadRight = nums[mid + 1];
  int maxLeft = maxSubArraywithIndex(nums, left, mid);
  int maxRight = maxSubArraywithIndex(nums, mid + 1, right);
  for (i = mid, sum = 0; i >= left; i--)
  {
    sum += nums[i];
    if (sum > maxPadLeft)
      maxPadLeft = sum;
  }

  for (i = mid + 1, sum = 0; i <= right; i++)
  {
    sum += nums[i];
    if (sum > maxPadRight)
      maxPadRight = sum;
  }

  return MAX(MAX(maxLeft, maxRight), (maxPadLeft + maxPadRight));
}

static int divideConquer(vector<int> &nums)
{
  if (nums.empty())
    return 0;
  if (nums.size() == 1)
    return nums[0];

  return maxSubArraywithIndex(nums, 0, nums.size() - 1);
}

// Runtime: 12 ms, faster than 76.93%
// Memory Usage: 13.4 MB, less than 22.48%
int Solution::maxSubArray(vector<int> &nums)
{
  int result = nums[0], sum = nums[0];
  for (int num : nums)
  {
    sum += num;
    if (result < sum)
      result = sum;

    if (sum < 0)
      sum = 0;
  }
  return result;
}
