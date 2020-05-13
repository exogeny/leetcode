#include "solution.h"
#include "support.h"
#include "test.h"

namespace LeetcodeTest
{
  void delectDuplicateTest(const std::string &inputs,
                           const std::string &expected)
  {
    ListNode *head = stringToListNode(inputs);
    ListNode *result = Instance().deleteDuplicates(head);
    EXPECT_STREQ(expected.c_str(), listNodeToString(result).c_str());
  }

  LEETCODE_TEST(deleteDuplicates_1)
  {
    delectDuplicateTest("[1, 1, 1]", "[1]");
  }

  LEETCODE_TEST(deleteDuplicates_2)
  {
    delectDuplicateTest("[1, 1, 2]", "[1, 2]");
  }

  LEETCODE_TEST(deleteDuplicates_3)
  {
    delectDuplicateTest("[1, 1, 2, 3, 3]", "[1, 2, 3]");
  }
} // namespace LeetcodeTest
