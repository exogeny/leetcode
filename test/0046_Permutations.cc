#include <algorithm>
#include "test.h"
#include "support.h"

using std::vector;

namespace LeetcodeTest
{
  LEETCODE_TEST(0046_Permutations)
  {
    vector<int> input = {1, 2, 3};
    vector<vector<int>> output = Instance().permute(input);
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
}
