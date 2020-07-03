#include "solution.h"

using std::vector;

// Runtime: 0 ms, faster than 100.00%
// Memory Usage: 7.1 MB, less than 20.07%

vector<int> Solution::spiralOrder(vector<vector<int>> &matrix)
{
  vector<int> result;
  if (matrix.size() == 0)
    return result;

  int r1 = 0, r2 = matrix.size() - 1;
  int c1 = 0, c2 = matrix[0].size() - 1;

  while (r1 <= r2 && c1 <= c2)
  {
    for (int c = c1; c <= c2; c++)
      result.push_back(matrix[r1][c]);
    for (int r = r1 + 1; r <= r2; r++)
      result.push_back(matrix[r][c2]);
    if (r1 < r2 && c1 < c2)
    {
      for (int c = c2 - 1; c > c1; c--)
        result.push_back(matrix[r2][c]);
      for (int r = r2; r > r1; r--)
        result.push_back(matrix[r][c1]);
    }
    r1++; r2--;
    c1++; c2--;
  }
  return result;
}
