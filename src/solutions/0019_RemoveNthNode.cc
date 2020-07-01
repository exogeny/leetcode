#include "solution.h"

ListNode* Solution::removeNthFromEnd(ListNode* head, int n)
{
  ListNode dummy = ListNode(0);
  dummy.next = head;
  ListNode *slow = &dummy, *fast = &dummy;

  for (int i = 0; i <= n; i++)
    fast = fast->next;

  while (fast != NULL)
  {
    fast = fast->next;
    slow = slow->next;
  }

  slow->next = slow->next->next;

  return dummy.next;
}
