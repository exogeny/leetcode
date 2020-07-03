#include "solution.h"

using std::vector;

// Runtime: 28 ms, faster than 83.76%
// Memory Usage: 16.9 MB, less than 93.79%

vector<vector<int>> Solution::insert(vector<vector<int>>& intervals,
                                     vector<int>& newInterval)
{
  int index = 0;
  vector<vector<int>> result;
  int length = intervals.size();

  while (index < length && newInterval[1] >= intervals[index][0])
  {
    if (intervals[index][1] < newInterval[0])
    {
      result.push_back(intervals[index]);
    }
    else
    {
      newInterval[0] = MIN(intervals[index][0], newInterval[0]);
      newInterval[1] = MAX(intervals[index][1], newInterval[1]);
    }
    index++;
  }
  result.push_back(newInterval);
  while (index < length)
    result.push_back(intervals[index++]);

  return result;
}
