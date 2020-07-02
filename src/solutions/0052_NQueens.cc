#include "solution.h"

using std::string;
using std::vector;

// Runtime: 4 ms, faster than 86.79%
// Memory Usage: 6.3 MB, less than 42.64%

static int backtrack(vector<string> &queens,
                     vector<bool> &flags,
                    int row, int n)
{
  if (row == n)
    return 1;

  int total = 0;
  for (int col = 0; col < n; col++)
  {
    if (flags[col] && flags[n + row + col] && flags[4 * n - 2 + col - row])
    {
      flags[col] = flags[n + row + col] = flags[4 * n - 2 + col - row] = false;
      queens[row][col] = 'Q';
      total += backtrack(queens, flags, row + 1, n);
      queens[row][col] = '.';
      flags[col] = flags[n + row + col] = flags[4 * n - 2 + col - row] = true;
    }
  }
  return total;
}

int Solution::totalNQueens(int n)
{
  vector<string> queens(n, string(n, '.'));
  vector<bool> flags(5 * n - 2, 1);
  return backtrack(queens, flags, 0, n);
}
