#include "solution.h"

using std::vector;

// Runtime: 0 ms, faster than 100.00%
// Memory Usage: 6.5 MB, less than 84.03%

vector<vector<int>> Solution::generateMatrix(int n)
{
  vector<vector<int>> result(n, vector<int>(n, 0));
  int spiral;
  if (n % 2 == 0)
    spiral = n / 2;
  else
    spiral = (n + 1) / 2;

  int start = 0, end = n - 1, num = 1;
  for (int i = 0; i < spiral; i++)
  {
    for (int j = start; j <= end; j++)
      result[start][j] = num++;

    for (int j = start + 1; j <= end; j++)
      result[j][end] = num++;

    for (int j = end - 1; j >= start; j--)
      result[end][j] = num++;

    for (int j = end - 1; j > start; j--)
      result[j][start] = num++;

    start++;
    end--;
  }
  return result;
}
