#include "solution.h"
#include <algorithm>

using std::string;
using std::vector;

// Runtime: 24 ms, faster than 37.35%
// Memory Usage: 9.1 MB, less than 27.58%

int Solution::minDistance(std::string word1, std::string word2)
{
  string::size_type s1 = word1.size();
  string::size_type s2 = word2.size();

  if (s1 == 0) return s2;
  if (s2 == 0) return s1;

  vector<vector<int>> distances(s1 + 1, vector<int>(s2 + 1, 0));

  for (int i = 0; i < s1 + 1; i ++)
    distances[i][0] = i;

  for (int i = 1; i < s2 + 1; i++)
    distances[0][i] = i;

  for (int i = 1; i < s1 + 1; i++)
  {
    for (int j = 1; j < s2 + 1; j++)
    {
      if (word1[i - 1] == word2[j - 1])
        distances[i][j] = distances[i - 1][j - 1];
      else
      {
        distances[i][j] = 1 + \
            std::min(distances[i - 1][j - 1], \
                std::min(distances[i - 1][j], distances[i][j - 1]));;
      }
    }
  }
  return distances[s1][s2];
}
