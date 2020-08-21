#include "solution.h"

using std::vector;

// Runtime: 0 ms, faster than 100.00%
// Memory Usage: 6.6 MB, less than 20.06%

int Solution::uniquePaths(int m, int n)
{
  vector<vector<int>> paths(m, vector<int>(n));

  for (int i = 0; i < m; i++)
    paths[i][0] = 1;

  for (int i = 0; i < n; i++)
    paths[0][i] = 1;

  for (int i = 1; i < m; i++)
  {
    for (int j = 1; j < n; j++)
    {
      paths[i][j] = paths[i - 1][j] + paths[i][j - 1];
    }
  }
  return paths[m - 1][n - 1];
}