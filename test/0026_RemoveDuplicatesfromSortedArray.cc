#include "solution.h"
#include "support.h"
#include "test.h"

using std::vector;

namespace LeetcodeTest
{
  LEETCODE_TEST(RemoveDuplicatesfromSortedArray_1)
  {
    vector<int> expected = {1, 2};
    vector<int> input = stringToIntegerVector("[1,1,2]");
    int length = Instance().removeDuplicates(input);

    EXPECT_EQ(length, expected.size());
    for (int i = 0; i < length; i++)
    {
      EXPECT_EQ(expected[i], input[i]);
    }
  }

  LEETCODE_TEST(RemoveDuplicatesfromSortedArray_2)
  {
    vector<int> expected = {0, 1, 2, 3, 4};
    vector<int> input = stringToIntegerVector("[0,0,1,1,1,2,2,3,3,4]");
    int length = Instance().removeDuplicates(input);

    EXPECT_EQ(length, expected.size());
    for (int i = 0; i < length; i++)
    {
      EXPECT_EQ(expected[i], input[i]);
    }
  }
} // namespace LeetcodeTest
