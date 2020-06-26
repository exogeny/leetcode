#include <algorithm>
#include "solution.h"

using std::vector;

vector<vector<int>> Solution::threeSum(vector<int> &nums)
{
  if (nums.size() < 2)
    return {};
  int index, start, end, sum;
  int len = nums.size();
  vector<int> copied = vector<int>(nums);
  vector<vector<int>> ret;

  sort(copied.begin(), copied.end());

  for (index = 0; index < len - 1;)
  {
    start = index + 1, end = len - 1;
    while (start < end)
    {
      sum = copied[index] + copied[start] + copied[end];
      if (sum == 0)
      {
        ret.push_back({copied[index], copied[start], copied[end]});
        start++;
        end--;
        // skip the same numbers
        while (start < end && copied[start] == copied[start + 1])
          start++;
        while (start < end && copied[end] == copied[end - 1])
          end--;
      }
      else if (sum < 0)
      {
        start++;
        // skip the same numbers
        while (start < end && copied[start] == copied[start + 1])
          start++;
      }
      else
      {
        end--;
        // skip the same numbers
        while (start < end && copied[end] == copied[end - 1])
          end--;
      }
    }
    index++;
    // skip the same condition
    while (index < len - 1 && copied[index] == copied[index + 1])
      index++;
  }

  return ret;
}
