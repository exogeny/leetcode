#include "solution.h"

/**
 * Other solution: Newton's Alogrithm
 * x < 2: just return x;
 * x >= 2:
 *  let k = x / 2;
 *  while k * k > x
 *    let k = (k + x / k) / 2
 * return k
 * 
 * This solution:
 * Runtime: 0 ms, faster than 100.00%
 * Memory Usage: 5.9 MB, less than 90.34%
 **/

// Runtime: 4 ms, faster than 64.97% 
// Memory Usage: 5.9 MB, less than 88.13%

int Solution::mySqrt(int x)
{
  // 0 or 1, just return the value.
  if (x < 2)
    return x;

  int left = 1, right = x / 2 + 1;
  long mid;
  while (left + 1 < right)
  {
    mid = (left + right) / 2;
    if (mid * mid == x)
    {
      left = mid;
      break;
    }
    else if (mid * mid < x)
    {
      left = mid;
    }
    else
    {
      right = mid;
    }
  }
  return left;
}
