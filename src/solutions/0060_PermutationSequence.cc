#include "solution.h"

using std::string;

// Runtime: 0 ms, faster than 100.00%
// Memory Usage: 5.9 MB, less than 91.05%

static int FACTORIAL[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

string Solution::getPermutation(int n, int k)
{
  static string SEQUENCE = "123456789";
  int index;
  string result;
  string sequence = SEQUENCE.substr(0, n);

  while (n > 0)
  {
    index = (k - 1) / FACTORIAL[n - 1];
    result.push_back(sequence[index]);
    sequence = sequence.substr(0, index) + sequence.substr(index + 1);
    k = k - index * FACTORIAL[n - 1];
    n = n - 1;
  }

  return result;
}
