#include "solution.h"

using std::vector;

static void backtrack(vector<vector<int>> &result,
                      vector<int> &nums, int l, int r)
{
  if (l == r)
    result.push_back(vector<int>{nums});

  for (int i = l; i <= r; i++)
  {
    std::swap(nums[l], nums[i]);
    backtrack(result, nums, l + 1, r);
    std::swap(nums[l], nums[i]);
  }
}

vector<vector<int>> Solution::permute(vector<int> &nums)
{
  vector<vector<int>> result;
  backtrack(result, nums, 0, nums.size() - 1);
  return result;
}
