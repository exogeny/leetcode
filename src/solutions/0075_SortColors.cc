#include "solution.h"

// Runtime: 4 ms, faster than 60.44%
// Memory Usage: 8.3 MB, less than 77.03%

void Solution::sortColors(std::vector<int> &nums)
{
  std::vector<int>::iterator low = nums.begin();
  std::vector<int>::iterator mid = low;
  std::vector<int>::iterator high = nums.end() - 1;

  while (mid <= high)
  {
    if (*mid == 0)
    {
      std::swap(*low, *mid);
      low++;
      mid++;
    }
    else if (*mid == 1)
    {
      mid++;
    }
    else
    {
      std::swap(*mid, *high);
      high--;
    }
  }
}
