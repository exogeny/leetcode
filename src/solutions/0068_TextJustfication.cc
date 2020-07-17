#include "solution.h"

using std::string;
using std::vector;

static string justifyString(vector<string> &words, int l, int r,
                            bool leftJustified, int charCnt, int maxWidth)
{
  string ans;
  int spaceCnt = maxWidth - charCnt;
  int evenPadding = leftJustified ? 1 : spaceCnt / (r - l);
  int nleft = leftJustified ? 0 : spaceCnt % (r - l);

  for (int i = l; i < r; i++)
    ans += words[i] + string(evenPadding + (i - l < nleft), ' ');
  ans += words[r];

  return ans + string(maxWidth - ans.size(), ' ');
}

// Runtime: 4 ms, faster than 58.61%
// Memory Usage: 7.6 MB, less than 41.55%

vector<string> Solution::fullJustify(vector<string> &words, int maxWidth)
{
  vector<string> result;
  int n = words.size(), charCnt = 0, l = 0; // l: index of beginnig word in row

  for (int i = 0; i < n; i++)
  {
    // Calc minimum length of string if include words[i]. At least (i - l)
    // spaces are needed to seperate words
    int extend = charCnt + words[i].size() + i - l;
    if (extend <= maxWidth)
    {
      charCnt += words[i].size();
      if (i == n - 1)
        result.push_back(justifyString(words, l, i, true, charCnt, maxWidth));
    }
    else
    {
      int r = i - 1;
      // l == r single word row, left justify
      result.push_back(justifyString(words, l, r, l == r, charCnt, maxWidth));
      l = i--;
      charCnt = 0;
    }
  }

  return result;
}
