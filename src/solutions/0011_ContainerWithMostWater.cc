#include "solution.h"

using std::vector;

inline int max(int a, int b)
{
  return (a > b) ? a : b;
}

inline int min(int a, int b)
{
  return (a < b) ? a : b;
}

int Solution::maxArea(vector<int>& height)
{
  int result = 0, area;
  vector<int>::iterator fp = height.begin();
  vector<int>::iterator rp = height.end() - 1;

  while (fp != rp)
  {
    area = min(*fp, *rp) * (rp - fp);
    result = max(result, area);

    if (*fp > *rp)
    {
      rp--;
    }
    else
    {
      fp++;
    }
  }
  return result;
}
