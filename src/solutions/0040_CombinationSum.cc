#include <unordered_map>
#include "solution.h"

using std::vector;
using std::unordered_map;

static void internalCombination(
    vector<vector<int>> &result,
    vector<int> &candicates,
    vector<int> &combination,
    unordered_map<int, int> &numbers,
    int target, unsigned index)
{
  if (target == 0)
    result.push_back(combination);

  if (target <= 0)
    return;

  int new_target, cur;
  for (; index < candicates.size(); index++)
  {
    cur = candicates[index];
    for (int i = 0; i < numbers[cur]; i++)
    {
      combination.push_back(cur);
      new_target = target - cur * (i + 1);
      internalCombination(result, candicates, combination, numbers,
                          new_target, index + 1);
    }

    for (int i = 0; i < numbers[cur]; i++)
      combination.pop_back();
  }
}

vector<vector<int>>
Solution::combinationSum2(vector<int> &candidates, int target)
{
  vector<vector<int>> res;
  vector<int> combination;
  vector<int> candidates_set;
  unordered_map<int, int> numbers;

  for (int c : candidates)
  {
    if (!numbers.count(c))
    {
      numbers[c] = 1;
      candidates_set.push_back(c);
    }
    else
    {
      numbers[c]++;
    }
  }

  internalCombination(res, candidates_set, combination, numbers, target, 0);
  return res;
}
