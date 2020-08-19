#include "test.h"
#include "support.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0019_RemoveNthNode)
  {
    ListNode *head = stringToListNode("[1,2,3,4,5]");
    head = Instance().removeNthFromEnd(head, 2);
    EXPECT_EQ("[1, 2, 3, 5]", listNodeToString(head));
  }
}
