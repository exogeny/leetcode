#include "solution.h"

// Runtime: 4 ms, faster than 53.00%.
// Memory Usage: 7.8 MB, less than 5.16%.

ListNode* Solution::swapPairs(ListNode* head)
{
  ListNode dummy(0);
  ListNode* cur = &dummy, *tmp;
  dummy.next = head;

  while (cur->next != NULL && cur->next->next != NULL)
  {
    tmp = cur->next;
    cur->next = tmp->next;
    tmp->next = cur->next->next;
    cur->next->next = tmp;
    cur = cur->next->next;
  }

  return dummy.next;
}
