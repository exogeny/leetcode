#include "solution.h"

using std::vector;

static int internalSearch(vector<int> &nums, int target, bool left)
{
  int lo = 0, hi = nums.size();
  while (lo < hi)
  {
    int mid = (lo + hi) / 2;
    if (nums[mid] > target || (left && target == nums[mid]))
      hi = mid;
    else
      lo = mid + 1;
  }
  return lo;
}

vector<int> Solution::searchRange(vector<int> &nums, int target)
{
  int start = internalSearch(nums, target, true);
  if (start == nums.size() || nums[start] != target)
    return {-1, -1};

  int end = internalSearch(nums, target, false) - 1;
  return {start, end};
}
