#include <algorithm>
#include <unordered_map>
#include "solution.h"

using std::vector;
using std::string;
using std::unordered_map;

vector<vector<string>> Solution::groupAnagrams(vector<string> &strs)
{
  int index = 0;
  int length = strs.size();
  vector<int> indices(length, 0);
  unordered_map<string, int> map;

  for (int i = 0; i < length; i++)
  {
    string str(strs[i]);
    std::sort(str.begin(), str.end());
    if (!map.count(str))
    {
      indices[i] = index;
      map[str] = index;
      index++;
    }
    else
    {
      indices[i] = map[str];
    }
  }

  vector<vector<string>> result(map.size(), vector<string>());
  for (int i = 0; i < length; i++)
  {
    result[indices[i]].push_back(strs[i]);
  }
  return result;
}
