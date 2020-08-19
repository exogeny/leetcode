#include "solution.h"
#include "support.h"
#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(addTwoNumbers)
  {
    ListNode *l1 = stringToListNode("[2, 4, 3]");
    ListNode *l2 = stringToListNode("[5, 6, 4]");
    ListNode *l3 = stringToListNode("[8, 5]");

    ListNode *s12 = Instance().addTwoNumbers(l1, l2);
    ListNode *s13 = Instance().addTwoNumbers(l1, l3);

    EXPECT_EQ("[7, 0, 8]", listNodeToString(s12));
    EXPECT_EQ("[0, 0, 4]", listNodeToString(s13));

    freeList(l1);
    freeList(l2);
    freeList(l3);
    freeList(s12);
    freeList(s13);
  }
} // namespace LeetcodeTest
