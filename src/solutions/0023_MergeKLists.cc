#include "solution.h"

// Runtime: 20 ms, faster than 97.74%.
// Memory Usage: 11.8 MB, less than 94.64%.

ListNode *Solution::mergeKLists(std::vector<ListNode *> &lists)
{
  int length = lists.size();
  if (length == 0)
    return NULL;

  int interval = (length + 1) / 2;

  while (length > 1)
  {
    for (int i = 0; i < length - interval; i++)
    {
      lists[i] = mergeTwoLists(lists[i], lists[i + interval]);
    }

    length = interval;
    interval = (length + 1) / 2;
  }

  return lists[0];
}
