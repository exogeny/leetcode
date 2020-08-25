#include "solution.h"
#include <algorithm>

using std::vector;

// Runtime: 12 ms, faster than 97.84%
// Memory Usage: 11.3 MB, less than 93.11%

bool Solution::searchMatrix(vector<vector<int>> &matrix, int target)
{
  int num_rows = matrix.size(), r = 0;
  if (num_rows == 0) return false;
  int num_cols = matrix[0].size();
  if (num_cols == 0) return false;
  while (r < num_rows)
  {
    if (matrix[r][num_cols - 1] < target)
      r++;
    else if (matrix[r][0] > target)
      return false;
    else
      return std::find(matrix[r].begin(), matrix[r].end(), target) != matrix[r].end();
  }
  return false;
}
