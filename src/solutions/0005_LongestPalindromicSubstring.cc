#include "solution.h"
#include <algorithm>

using std::string;
using std::vector;

/**
 * Expand Around Center
 *
 * static int expandAroundCenter(string s, unsigned left, unsigned right)
 * {
 *   while (left >= 0 && right < s.size() && s[left] == s[right])
 *   {
 *     left--;
 *     right++;
 *   }
 *   return right - left - 1;
 * }
 *
 * string Solution::longestPalindrome(string s)
 * {
 *   unsigned i, start = 0, count = 0;
 *   unsigned len, len1, len2;
 *   for (i = 0; i < s.size(); i++)
 *   {
 *     len1 = expandAroundCenter(s, i, i);
 *     len2 = expandAroundCenter(s, i, i + 1);
 *     len = len1 < len2 ? len2 : len1;
 *     if (len > count)
 *     {
 *       start = i - (len - 1) / 2;
 *       count = len;
 *     }
 *   }
 *   return s.substr(start, count);
 * }
 **/

string Solution::longestPalindrome(string s)
{
  string t = "$#";
  for (char &c : s)
  {
    t.push_back(c);
    t.push_back('#');
  }

  vector<int> p(t.size(), 0);
  int mx = 0, id = 0, res_length = 0, res_center = 0;
  for (int i = 1; i < t.size(); i++)
  {
    p[i] = mx > i ? std::min(p[2 * id - i], mx - i) : 1;
    while (t[i + p[i]] == t[i - p[i]])
      ++p[i];

    if (mx < i + p[i])
    {
      mx = i + p[i];
      id = i;
    }

    if (res_length < p[i])
    {
      res_length = p[i];
      res_center = i;
    }
  }
  return s.substr((res_center - res_length) / 2, res_length - 1);
}
