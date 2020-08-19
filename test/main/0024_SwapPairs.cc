#include "test.h"
#include "support.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0024_SwapPairs_1)
  {
    ListNode* head = stringToListNode("[1]");
    head = Instance().swapPairs(head);
    EXPECT_EQ("[1]", listNodeToString(head));
  }

  LEETCODE_TEST(0024_SwapPairs_2)
  {
    ListNode* head = stringToListNode("[1, 2]");
    head = Instance().swapPairs(head);
    EXPECT_EQ("[2, 1]", listNodeToString(head));
  }

  LEETCODE_TEST(0024_SwapPairs_3)
  {
    ListNode* head = stringToListNode("[1, 2, 3]");
    head = Instance().swapPairs(head);
    EXPECT_EQ("[2, 1, 3]", listNodeToString(head));
  }

  LEETCODE_TEST(0024_SwapPairs_4)
  {
    ListNode* head = stringToListNode("[1, 2, 3, 4]");
    head = Instance().swapPairs(head);
    EXPECT_EQ("[2, 1, 4, 3]", listNodeToString(head));
  }
}
