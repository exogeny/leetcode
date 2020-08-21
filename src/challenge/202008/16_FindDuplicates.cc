#include "202008.h"
#include <cstdlib>

std::vector<int> Challenge::findDuplicates(std::vector<int> &nums)
{
  int index;
  std::vector<int> ret;
  for (int val : nums)
  {
    index = abs(val) - 1;
    if (nums[index] < 0)
      ret.push_back(index + 1);
    else
      nums[index] = -nums[index];
  }
  return ret;
}
