#include <algorithm>
#include "test.h"
#include "support.h"

namespace LeetcodeTest
{
  using std::vector;

  LEETCODE_TEST(CombinationSum_1)
  {
    vector<int> candidates = {2, 3, 6, 7};
    vector<vector<int>> expected = {{2, 2, 3}, {7}};
    vector<vector<int>> res = Instance().combinationSum(candidates, 7);
    EXPECT_EQ(expected.size(), res.size());
    sort(res.begin(), res.end(), compare_fn);
    for (unsigned i = 0; i < res.size(); i++)
    {
      EXPECT_EQ(res[i], expected[i]);
    }
  }

  LEETCODE_TEST(CombinationSum_2)
  {
    vector<int> candidates = {2, 3, 5};
    vector<vector<int>> expected = {{2, 2, 2, 2}, {2, 3, 3}, {3, 5}};
    vector<vector<int>> res = Instance().combinationSum(candidates, 8);
    EXPECT_EQ(expected.size(), res.size());
    sort(res.begin(), res.end(), compare_fn);
    for (unsigned i = 0; i < res.size(); i++)
    {
      EXPECT_EQ(res[i], expected[i]);
    }
  }
}
