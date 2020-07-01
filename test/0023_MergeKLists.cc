#include "test.h"
#include "support.h"

namespace LeetcodeTest
{
  using std::vector;
  LEETCODE_TEST(0023_MergeKLists_1)
  {
    vector<ListNode*> lists = {
      stringToListNode("[1, 4, 5]") };
    ListNode* output = Instance().mergeKLists(lists);
    EXPECT_EQ("[1, 4, 5]", listNodeToString(output));
  }

  LEETCODE_TEST(0023_MergeKLists_2)
  {
    vector<ListNode*> lists = {
      stringToListNode("[1, 4, 5]"),
      stringToListNode("[1, 3, 4]"),
      stringToListNode("[2, 6]") };
    ListNode* output = Instance().mergeKLists(lists);
    EXPECT_EQ("[1, 1, 2, 3, 4, 4, 5, 6]", listNodeToString(output));
  }
}
