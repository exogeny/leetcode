#include "solution.h"

using std::vector;

// Runtime: 24 ms, faster than 31.12%
// Memory Usage: 10.3 MB, less than 12.44%

int Solution::minPathSum(vector<vector<int>> &grid)
{
  int m = grid.size(), n = grid[0].size();
  vector<vector<int>> sums(m, vector<int>(n, 0));

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 && j == 0)
        sums[i][j] = grid[i][j];
      else if (i == 0)
        sums[i][j] = sums[i][j - 1] + grid[i][j];
      else if (j == 0)
        sums[i][j] = sums[i - 1][j] + grid[i][j];
      else
        sums[i][j] = MIN(sums[i - 1][j], sums[i][j - 1]) + grid[i][j];
    }
  }
  return sums[m - 1][n - 1];
}
