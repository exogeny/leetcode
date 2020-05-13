#include "solution.h"

using std::string;

#ifndef INT_MAX
#define INT_MAX 2147483647
#endif

int Solution::myAtoi(string str)
{
  int base = INT_MAX / 10;
  int result = 0;

  if (str.length() == 0)
    return 0;

  // remove the whitespace
  if (str[0] == ' ' || (str[0] == '+' && (str[1] >= '0' && str[1] <= '9')))
    return myAtoi(str.substr(1));

  if ((str[0] < '0' || str[0] > '9') && str[0] != '-')
    return 0;

  bool sign = (str[0] == '-');
  string::iterator it = str.begin();

  if (sign)
  {
    it++;
  }

  while (it != str.end())
  {
    if (*it >= '0' && *it <= '9')
    {
      if (result > base || (result == base && *it - '0' > 7))
      {
        return (sign ? -2147483648 : 2147483647);
      }
      result = result * 10 + (*it - '0');
      it++;
    }
    else
    {
      break;
    }
  }
  return (sign ? -result : result);
}
