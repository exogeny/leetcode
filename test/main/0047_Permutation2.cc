#include <algorithm>
#include "test.h"
#include "support.h"

using std::vector;

namespace LeetcodeTest
{
  LEETCODE_TEST(0047_Permutations_1)
  {
    vector<int> input = {1, 1, 2};
    vector<vector<int>> output = Instance().permuteUnique(input);
    vector<vector<int>> expected = {
        {1, 1, 2},
        {1, 2, 1},
        {2, 1, 1}};
    sort(output.begin(), output.end(), compare_fn);
    EXPECT_EQ(expected, output);
  }

  LEETCODE_TEST(0046_Permutations_2)
  {
    vector<int> input = {1, 2, 3};
    vector<vector<int>> output = Instance().permuteUnique(input);
    vector<vector<int>> expected = {
        {1, 2, 3},
        {1, 3, 2},
        {2, 1, 3},
        {2, 3, 1},
        {3, 1, 2},
        {3, 2, 1}};
    sort(output.begin(), output.end(), compare_fn);
    EXPECT_EQ(expected, output);
  }

  LEETCODE_TEST(0047_Permutations_3)
  {
    vector<int> input = {1, 1, 1};
    vector<vector<int>> output = Instance().permuteUnique(input);
    vector<vector<int>> expected = { {1, 1, 1} };
    sort(output.begin(), output.end(), compare_fn);
    EXPECT_EQ(expected, output);
  }

  LEETCODE_TEST(0047_Permutations_4)
  {
    vector<int> input = {2, 2, 1, 1};
    vector<vector<int>> output = Instance().permuteUnique(input);
    vector<vector<int>> expected = {
        {1,1,2,2},
        {1,2,1,2},
        {1,2,2,1},
        {2,1,1,2},
        {2,1,2,1},
        {2,2,1,1} };
    sort(output.begin(), output.end(), compare_fn);
    EXPECT_EQ(expected, output);
  }
}
