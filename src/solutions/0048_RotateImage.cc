#include <algorithm>
#include "solution.h"

using std::vector;

void Solution::rotate(vector<vector<int>> &matrix)
{
  unsigned n = matrix.size();
  if (n > 1)
  {
    for (unsigned i = 0; i < n; i++)
      for (unsigned j = i + 1; j < n; j++)
        std::swap(matrix[i][j], matrix[j][i]);

    for (unsigned i = 0; i < n; i++)
      for (unsigned j = 0, k = n - 1; j < k; j++, k--)
        std::swap(matrix[i][j], matrix[i][k]);
  }
}
