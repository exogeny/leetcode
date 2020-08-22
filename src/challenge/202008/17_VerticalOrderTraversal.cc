#include "202008.h"

#include <algorithm>
#include <map>
#include <queue>
#include <utility>

using namespace std;

vector<vector<int>> Challenge::verticalTraversal(TreeNode *root)
{
  vector<vector<int>> res;
  if (!root) return res;

  map<int, vector<int>> x_vals;
  queue<pair<TreeNode *, int>> q {{{root, 0}}};

  while (q.size())
  {
    map<int, int> cntr;
    int sz = q.size();
    for (int i = 0; i < sz; i++)
    {
      auto qc = q.front();
      q.pop();
      x_vals[qc.second].push_back(qc.first->val);
      cntr[qc.second]++;

      if (qc.first->left) q.push({qc.first->left, qc.second - 1});
      if (qc.first->right) q.push({qc.first->right, qc.second + 1});
    }

    for (auto &xcnt : cntr)
    {
      if (xcnt.second > 1)
        sort(x_vals[xcnt.first].end() - xcnt.second,
             x_vals[xcnt.first].end());
    }
  }

  for (auto &x_val : x_vals)
    res.emplace_back(move(x_val.second));

  return res;
}
