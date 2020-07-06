#include "solution.h"

// Runtime: 4 ms, faster than 97.57%
// Memory Usage: 11.3 MB, less than 51.31%

ListNode* Solution::rotateRight(ListNode* head, int k)
{
  if (!head || !head->next || k == 0)
    return head;

  ListNode dummy(0);
  dummy.next = head;

  int length = 0;
  ListNode *fast = &dummy;
  ListNode *slow = &dummy;

  while (fast->next != NULL && k > 0)
  {
    fast = fast->next;
    k--;
    length++;
  }

  if (fast->next == NULL)
  {
    k = k % length;
    fast = &dummy;
    while (fast->next != NULL && k > 0)
    {
      fast = fast->next;
      k--;
      length++;
    }
  }

  ListNode *tail;
  while (fast->next != NULL)
  {
    fast = fast->next;
    slow = slow->next;
    tail = fast;
  }

  tail->next = head;
  dummy.next = slow->next;
  slow->next = NULL;

  return dummy.next;
}
