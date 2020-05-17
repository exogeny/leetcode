#include "solution.h"

using std::vector;

void Solution::nextPermutation(vector<int> &nums)
{
  int tmp;
  if (nums.size() == 0 || nums.size() == 1)
    return;

  vector<int>::iterator i = nums.end() - 2;
  vector<int>::iterator j = nums.end() - 1;

  for (; i >= nums.begin(); --i)
  {
    if (*i < *(i + 1))
      break;
  }

  if (i >= nums.begin())
  {
    for (; j > i; --j)
    {
      if (*j > *i)
        break;
    }
    tmp = *i;
    *i = *j;
    *j = tmp;
  }

  i += 1;
  j = nums.end() - 1;

  for (; j > i; j--, i++)
  {
    tmp = *i;
    *i = *j;
    *j = tmp;
  }
}
