#include "solution.h"

using std::string;
using std::vector;

// Runtime: 8 ms, faster than 84.04%
// Memory Usage: 7.3 MB, less than 83.60%

// flag[0] to flag[n - 1] to indicate if the column had a queen before.
// flag[n] to flag[3 * n - 2] to indicate if the 45° diagonal had a queen
// before.
// flag[3 * n - 1] to flag[5 * n - 3] to indicate if the 135° diagonal
// had a queen before.
static void backtrack(vector<vector<string>> &result,
                      vector<string> &queens,
                      vector<bool> &flags,
                      int row, int n)
{
  if (row == n)
  {
    result.push_back(queens);
    return;
  }

  for (int col = 0; col < n; col++)
  {
    if (flags[col] && flags[n + row + col] && flags[4 * n - 2 + col - row])
    {
      flags[col] = flags[n + row + col] = flags[4 * n - 2 + col - row] = false;
      queens[row][col] = 'Q';
      backtrack(result, queens, flags, row + 1, n);
      queens[row][col] = '.';
      flags[col] = flags[n + row + col] = flags[4 * n - 2 + col - row] = true;
    }
  }
}

vector<vector<string>> Solution::solveNQueens(int n)
{
  vector<vector<string>> result;
  vector<string> queens(n, string(n, '.'));
  vector<bool> flags(5 * n - 2, 1);

  backtrack(result, queens, flags, 0, n);
  return result;
}
