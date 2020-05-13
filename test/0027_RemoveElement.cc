#include "solution.h"
#include "support.h"
#include "test.h"

using std::vector;

namespace LeetcodeTest
{
  LEETCODE_TEST(RemoveElement_1)
  {
    vector<int> expected = {2, 2};
    vector<int> input = stringToIntegerVector("[3,2,2,3]");
    int length = Instance().removeElement(input, 3);

    EXPECT_EQ(length, 2);
    for (int i = 0; i < length; i++)
    {
      EXPECT_EQ(expected[i], input[i]);
    }
  }

  LEETCODE_TEST(RemoveElement_2)
  {
    vector<int> expected = {0, 1, 3, 0, 4};
    vector<int> input = stringToIntegerVector("[0,1,2,2,3,0,4,2]");
    int length = Instance().removeElement(input, 2);

    EXPECT_EQ(length, expected.size());
    for (int i = 0; i < length; i++)
    {
      EXPECT_EQ(expected[i], input[i]);
    }
  }
} // namespace LeetcodeTest
