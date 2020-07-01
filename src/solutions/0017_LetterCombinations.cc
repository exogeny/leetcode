#include "solution.h"

using std::vector;
using std::string;

static vector<string> LETTER_MAP = {
  "", "abc", "def",
  "ghi", "jkl", "mno",
  "pqrs", "tuv", "wxyz",
};

static void backtrack(
    vector<string> &result,
    string &digits,
    string cur,
    int l, int r)
{
  if (l == r)
  {
    result.push_back(cur);
    return;
  }

  int index = (digits[l] - '1');
  for (char c : LETTER_MAP[index])
  {
    backtrack(result, digits, cur + c, l + 1, r);
  }
}

vector<string> Solution::letterCombinations(string &digits)
{
  if (digits.size() == 0)
    return {};

  vector<string> result;
  backtrack(result, digits, "", 0, digits.size());
  return result;
}
