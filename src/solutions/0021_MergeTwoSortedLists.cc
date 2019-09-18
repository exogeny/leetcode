#include "solution.hpp"

ListNode *Solution::mergeTwoLists(ListNode *l1, ListNode *l2)
{
    ListNode *result, *cur;
    for (; l1 != NULL || l2 != NULL;)
    {
        ListNode *node;
        if (!l2 || (l1 && l1->val < l2->val))
        {
            node = new ListNode(l1->val);
            l1 = l1->next;
        }
        else
        {
            node = new ListNode(l2->val);
            l2 = l2->next;
        }

        if (result == NULL)
            result = cur = node;
        else
        {
            cur->next = node;
            cur = cur->next;
        }
    }

    return result;
}
