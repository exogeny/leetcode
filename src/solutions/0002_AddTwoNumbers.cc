#include "solution.hpp"

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode pHead = ListNode(0);
    ListNode* curr = &pHead;
    int carry = 0;
    int sum = 0;
    while (l1 || l2)
    {
        sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = sum / 10;
        sum = sum % 10;
        curr->next = new ListNode(sum);
        curr = curr->next;
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
    }

    if (carry > 0)
    {
        curr->next = new ListNode(carry);
    }

    return pHead.next;
}