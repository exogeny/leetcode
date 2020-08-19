#include "test.h"

namespace LeetcodeTest
{
  using std::vector;
  LEETCODE_TEST(0056_MergeIntervals_1)
  {
    vector<vector<int>> input = {{1, 4}, {4, 5}};
    vector<vector<int>> expect = {{1, 5}};
    EXPECT_EQ(expect, Instance().merge(input));
  }

  LEETCODE_TEST(0056_MergeIntervals_2)
  {
    vector<vector<int>> input = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> expect = {{1, 6}, {8, 10}, {15, 18}};
    EXPECT_EQ(expect, Instance().merge(input));
  }
}
