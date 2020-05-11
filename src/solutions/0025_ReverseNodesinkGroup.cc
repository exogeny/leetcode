#include <algorithm>
#include "solution.hpp"

using std::vector;

ListNode *Solution::reverseKGroup(ListNode *head, int k)
{
  ListNode *head_cur = head, *tail_cur;
  ListNode *res = NULL, *res_cur, *tmp;
  while (head_cur)
  {
    tail_cur = head_cur;
    for (int i = 0; i < k - 1 && tail_cur != NULL; i++) {
      tail_cur = tail_cur->next;
    }

    if (tail_cur == NULL) {
      break;
    }

    if (res == NULL) {
      res = tail_cur;
    } else {
      res_cur->next = tail_cur;
    }

    res_cur = head_cur;
    while (head_cur != tail_cur)
    {
      tmp = head_cur->next;
      head_cur->next = tail_cur->next;
      tail_cur->next = head_cur;
      head_cur = tmp;
    }
    head_cur = res_cur->next;
  }
  return res;
}