#include "solution.h"
#include "support.h"
#include "test.h"

using std::string;
using std::vector;

namespace LeetcodeTest
{
  using std::string;

  LEETCODE_TEST(ReverseKGroup_1)
  {
    string expected("[2, 1, 4, 3, 5]");
    ListNode *input = stringToListNode("[1, 2, 3, 4, 5]");
    ListNode *result = Instance().reverseKGroup(input, 2);

    EXPECT_STREQ(expected.c_str(), listNodeToString(result).c_str());
  }

  LEETCODE_TEST(ReverseKGroup_2)
  {
    string expected("[3, 2, 1, 4, 5]");
    ListNode *input = stringToListNode("[1, 2, 3, 4, 5]");
    ListNode *result = Instance().reverseKGroup(input, 3);

    EXPECT_STREQ(expected.c_str(), listNodeToString(result).c_str());
  }
} // namespace LeetcodeTest
