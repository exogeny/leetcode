#include "solution.h"

using std::vector;

static bool checkLine(vector<char> &line)
{
  int index;
  bool mask[9] = {false};
  for (char c : line)
  {
    if (c == '.')
      continue;

    index = c - '0' - 1;
    if (mask[index])
      return false;
    mask[index] = true;
  }
  return true;
}

bool Solution::isValidSudoku(vector<vector<char>> &board)
{
  vector<char> line;
  for (int i = 0; i < 9; i++)
  {
    if (!checkLine(board[i]))
      return false;

    line.clear();
    for (int j = 0; j < 9; j++)
    {
      line.push_back(board[j][i]);
    }
    if (!checkLine(line))
      return false;

    line.clear();
    int row = i / 3, col = i % 3;
    for (int r = row * 3; r < (row + 1) * 3; r++)
      for (int c = col * 3; c < (col + 1) * 3; c++)
        line.push_back(board[r][c]);
    if (!checkLine(line))
      return false;
  }

  return true;
}
