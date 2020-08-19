#include "solution.h"

using std::string;
using std::vector;

// Runtime: 12 ms, faster than 86.77%
// Memory Usage: 7.7 MB, less than 78.94%

string Solution::simplifyPath(string path)
{
  path.push_back('/');
  vector<string> paths;
  string::size_type pos1 = 0, pos2 = path.find('/');

  while (string::npos != pos2)
  {
    if (pos2 != pos1)
    {
      string p = path.substr(pos1, pos2 - pos1);
      if (p[0] != '.' || p.size() > 2)
      {
        paths.push_back(p);
      }
      else if (p.size() > 1 && p[1] == '.')
      {
        if (!paths.empty())
          paths.pop_back();
      }
    }
    pos1 = pos2 + 1;
    pos2 = path.find('/', pos1);
  }

  if (paths.empty())
    return "/";

  string res;
  for (auto &p : paths)
  {
    res.push_back('/');
    res.append(p);
  }
  return res;
}
