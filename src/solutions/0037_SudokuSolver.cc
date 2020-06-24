#include "solution.h"

using std::vector;

static bool place(vector<vector<char>> &board, int row, int col, char val)
{
  for (int i = 0; i < 9; i++)
  {
    if (board[row][i] == val || board[i][col] == val)
      return false;
  }

  row = row / 3, col = col / 3;
  for (int r = 0; r < 3; r++)
    for (int c = 0; c < 3; c++)
      if (board[row * 3 + r][col * 3 + c] == val)
        return false;

  return true;
}

static bool next(vector<vector<char>> &board, int &row, int &col, bool first)
{
  for (; row < 9; row++)
  {
    for (; col < 9; col++)
    {
      if (first && board[row][col] == '.')
        return false;
      first = true;
    }
    col = 0;
  }
  return true;
}

static bool backtrack(vector<vector<char>> &board, int row, int col)
{
  int next_row = row, next_col = col;
  bool end = next(board, next_row, next_col, false);
  for (char val = '1'; val <= '9'; val++)
  {
    if (place(board, row, col, val))
    {
      board[row][col] = val;
      if (end || backtrack(board, next_row, next_col))
        return true;
      board[row][col] = '.';
    }
  }
  return false;
}

void Solution::solveSudoku(vector<vector<char>> &board)
{
  int row = 0, col = 0;
  bool end = next(board, row, col, true);
  if (!end)
   backtrack(board, row, col);
}
