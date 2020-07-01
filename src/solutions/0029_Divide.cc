#include <cmath>
#include <climits>
#include "solution.h"

// Runtime: 0 ms, faster than 100.00%
// Memory Usage: 6.5 MB, less than 5.00%

int Solution::divide(int dividend, int divisor)
{
  int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
  long ldividend = labs(dividend);
  long ldivisor = labs(divisor);

  long res = exp(log(ldividend) - log(ldivisor));
  if (res > INT_MAX)
    return sign == 1 ? INT_MAX : INT_MIN;
  return sign * (int)res;
}
