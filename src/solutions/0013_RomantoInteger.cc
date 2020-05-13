#include "solution.h"

using std::string;

int Solution::romanToInt(string s)
{
  int i, sum = 0;
  int current, last = 1000;
  int length = s.size();

  for (i = 0; i < length; i++)
  {
    // just map the value
    switch (s[i])
    {
    case 'I':
      current = 1;
      break;
    case 'V':
      current = 5;
      break;
    case 'X':
      current = 10;
      break;
    case 'L':
      current = 50;
      break;
    case 'C':
      current = 100;
      break;
    case 'D':
      current = 500;
      break;
    case 'M':
      current = 1000;
      break;
    }

    // only the last value smaller than current, the two can combine together.
    if (current > last)
      sum -= 2 * last;

    sum += current;
    last = current;
  }

  return sum;
}
