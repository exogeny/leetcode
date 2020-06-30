#include <unordered_set>
#include "solution.h"

using std::vector;
using std::unordered_set;

static void backtrack(vector<vector<int>> &result,
                      vector<int> &nums, int l, int r)
{
  if (l == r)
    result.push_back(vector<int>{nums});

  unordered_set<int> seen;
  for (int i = l; i <= r; i++)
  {
    if (!seen.count(nums[i]))
    {
      std::swap(nums[l], nums[i]);
      backtrack(result, nums, l + 1, r);
      std::swap(nums[l], nums[i]);

      seen.insert(nums[i]);
    }
  }
}

vector<vector<int>> Solution::permuteUnique(vector<int> &nums)
{
  vector<vector<int>> result;
  backtrack(result, nums, 0, nums.size() - 1);
  return result;
}
