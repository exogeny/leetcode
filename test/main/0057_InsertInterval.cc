#include "test.h"

namespace LeetcodeTest
{
  using std::vector;
  LEETCODE_TEST(0057_InsertInterval_1)
  {
    vector<vector<int>> input = {{1, 3}, {6, 9}};
    vector<int> interval = {2, 5};
    vector<vector<int>> expect = {{1, 5}, {6, 9}};
    EXPECT_EQ(expect, Instance().insert(input, interval));
  }

  LEETCODE_TEST(0057_InsertInterval_2)
  {
    vector<vector<int>> input = {{1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16}};
    vector<int> interval = {4, 8};
    vector<vector<int>> expect = {{1, 2}, {3, 10}, {12, 16}};
    EXPECT_EQ(expect, Instance().insert(input, interval));
  }

  LEETCODE_TEST(0057_InsertInterval_3)
  {
    vector<vector<int>> input = {{2, 3}};
    vector<int> interval = {1, 4};
    vector<vector<int>> expect = {{1, 4}};
    EXPECT_EQ(expect, Instance().insert(input, interval));
  }
}
