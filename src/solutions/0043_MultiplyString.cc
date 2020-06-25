#include <algorithm>
#include "solution.h"

using std::string;

string Solution::multiply(string &num1, string &num2)
{
  if (num1.size() == 0 || num2.size() == 0)
    return "";
  string result(num1.size() + num2.size(), '0');
  std::reverse(num1.begin(), num1.end());
  std::reverse(num2.begin(), num2.end());

  int ans;
  int carry = 0;
  for (unsigned i = 0; i < num1.size(); i++)
  {
    for (unsigned j = 0; j < num2.size(); j++)
    {
      ans = ((num1[i] - '0') * (num2[j] - '0'));
      ans = ans + carry + result[i + j] - '0';
      carry = ans / 10;
      result[i + j] = ((ans % 10) + '0');
    }
    if (carry > 0)
    {
      result[i + num2.size()] = (carry + '0');
      carry = 0;
    }
  }

  std::reverse(result.begin(), result.end());
  unsigned pad = 0;
  for (; pad < result.size(); pad++)
  {
    if (result[pad] != '0')
      break;
  }
  result = result.substr(pad);
  if (result.empty())
    result.push_back('0');

  return result;
}
