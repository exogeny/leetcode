#include <algorithm>
#include "test.h"
#include "support.h"

namespace LeetcodeTest
{
  using std::vector;
  using std::string;

  static bool compare_fn(vector<int> &v1, vector<int> &v2)
  {
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for (unsigned i = 0; i < v1.size() && i < v2.size(); i++)
    {
      if (v1[i] < v2[i])
        return true;
      if (v1[i] > v2[i])
        return false;
    }
    return v1.size() < v2.size();
  }

  LEETCODE_TEST(CombinationSum2_1)
  {
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    vector<vector<int>> expected = {{1, 1, 6}, {1, 2, 5}, {1, 7}, {2, 6}};
    vector<vector<int>> ret = Instance().combinationSum2(candidates, 8);
    sort(ret.begin(), ret.end(), compare_fn);
    EXPECT_EQ(ret, expected);
  }

  LEETCODE_TEST(CombinationSum2_2)
  {
    vector<int> candidates = {2, 5, 2, 1, 2};
    vector<vector<int>> expected = {{1, 2, 2}, {5}};
    vector<vector<int>> ret = Instance().combinationSum2(candidates, 5);
    sort(ret.begin(), ret.end(), compare_fn);
    EXPECT_EQ(ret, expected);
  }
}
