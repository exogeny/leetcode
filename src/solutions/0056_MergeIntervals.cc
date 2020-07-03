#include <algorithm>
#include "solution.h"

using std::vector;

// Runtime: 44 ms, faster than 69.49%
// Memory Usage: 14.6 MB, less than 42.73%

vector<vector<int>> Solution::merge(vector<vector<int>> &intervals)
{
  if (intervals.size() <= 1)
    return intervals;

  vector<vector<int>> result;
  sort(intervals.begin(), intervals.end());
  int v1 = intervals[0][0], v2 = intervals[0][1];

  for (vector<int> &nums : intervals)
  {
    if (nums[0] <= v2)
    {
      v2 = (nums[1] > v2 ? nums[1] : v2);
    }
    else
    {
      result.push_back({v1, v2});
      v1 = nums[0], v2 = nums[1];
    }
  }
  result.push_back({v1, v2});
  return result;
}
