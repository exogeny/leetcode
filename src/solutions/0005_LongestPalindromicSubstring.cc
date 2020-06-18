#include "solution.h"

using std::string;

int expandAroundCenter(string s, unsigned int left, unsigned int right)
{
  while (left >= 0 && right < s.size() && s[left] == s[right])
  {
    left--;
    right++;
  }
  return right - left - 1;
}

string Solution::longestPalindrome(string s)
{
  unsigned int i, start = 0, count = 0;
  unsigned int len, len1, len2;
  for (i = 0; i < s.size(); i++)
  {
    len1 = expandAroundCenter(s, i, i);
    len2 = expandAroundCenter(s, i, i + 1);
    len = len1 < len2 ? len2 : len1;
    if (len > count)
    {
      start = i - (len - 1) / 2;
      count = len;
    }
  }
  return s.substr(start, count);
}
