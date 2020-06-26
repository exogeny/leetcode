#include "solution.h"

using std::string;
using std::vector;

bool Solution::isMatch2(string &s, string &p)
{
  int slen = s.size();
  int plen = p.size();
  int i, j;
  vector<vector<bool>> results(plen + 1, vector<bool>(slen + 1, false));
  results[0][0] = true;

  for (i = 0; i < plen; i++)
  {
    if (p[i] != '*')
      break;
    results[i + 1][0] = true;
  }

  for (i = 0; i < plen; i++)
  {
    for (j = 0; j < slen; j++)
    {
      if (p[i] == '?')
      {
        results[i + 1][j + 1] = results[i][j];
      }
      else if (p[i] == '*')
      {
        results[i + 1][j + 1] = results[i][j + 1] || results[i + 1][j];
      }
      else
      {
        if (p[i] == s[j])
          results[i + 1][j + 1] = results[i][j];
      }
    }
  }
  return results[plen][slen];
}
