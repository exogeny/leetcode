#include "solution.hpp"

ListNode *Solution::deleteDuplicates(ListNode *head)
{
    if (head == NULL)
        return head;

    ListNode *slow = head;
    ListNode *fast = head->next;

    while (fast != NULL)
    {
        if (slow->val != fast->val)
        {
            slow->next = fast;
            slow = fast;
        }
        fast = fast->next;
    }

    slow->next = NULL;

    return head;
}
