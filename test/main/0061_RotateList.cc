#include "test.h"
#include "support.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0062_RorateList_1)
  {
    ListNode *head = stringToListNode("[1, 2, 3, 4, 5]");
    head = Instance().rotateRight(head, 2);
    std::string expect = "[4, 5, 1, 2, 3]";
    EXPECT_EQ(expect, listNodeToString(head));
  }

  LEETCODE_TEST(0062_RorateList_2)
  {
    ListNode *head = stringToListNode("[0, 1, 2]");
    head = Instance().rotateRight(head, 4);
    std::string expect = "[2, 0, 1]";
    EXPECT_EQ(expect, listNodeToString(head));
  }

  LEETCODE_TEST(0062_RorateList_3)
  {
    ListNode *head = stringToListNode("[1, 2]");
    head = Instance().rotateRight(head, 0);
    std::string expect = "[1, 2]";
    EXPECT_EQ(expect, listNodeToString(head));
  }
}
