#include "solution.hpp"

using std::string;

int Solution::lengthOfLongestSubstring(string s)
{
  int len = s.size(), result = 0, tmp = 0, i, j;
  int *index = new int[128]();
  for (i = 0, j = 0; j < len; j++)
  {
    tmp = (int)s[j];
    i = max(index[tmp], i);
    result = max(result, j - i + 1);
    index[tmp] = j + 1;
  }
  delete[] index;
  return result;
}
