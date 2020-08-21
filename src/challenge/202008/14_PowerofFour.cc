#include "202008.h"
#include <cmath>

bool Challenge::isPowerOfFour(int num)
{
  if (num <= 0) return false;
  float v = log2f(num) / 2;
  return (floor(v) - v == 0);
}
