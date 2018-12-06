# Add Two Numbers

click [leetcode](https://leetcode.com/problems/add-two-numbers/) for more detail.

## Description
You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse order** and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

**Example**:
```
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
```

## Solution
Just like how we would sum two numbers on a piece of paper, we begin by summing the least-significant digits, which is the head of l1 and l2. Since each digit is in the range of 0...9, summing two digits may *overflow*. For example `5 + 7 = 12`. In this case, we set the current digit to 2 and bring over the `carry = 1` to the next iteration. `carry` must be either 0 or 1 because the largest possible sum of two digits(including carry) is `9 + 9 + 1 = 19`.
The pseudocode is as following:
* Initialize current node to dummy head of the returning list.
* Initialize carry to 0.
* Initialize `p` and `q` to head of l1 and l2 respectively.
* Loop through lists l1 and l2 until read both ends.
    * Set `x` to node `p`'s value. if p has reached the end of l1, set to 0.
    * Set `y` to node `q`'s value. if q has reached the end of l2, set to 0.
    * Set sum = x + y + carry.
    * Update carry = sum / 10.
    * Create a new node with the digit value of (sum mod 10) and set it to current node's next, then advance current node to next.
    * Advance both `p` and `q`
* Check if `carry = 1`, if so append a new node with digit 1 to the returning list.
* Return dummy head's next node.
So the code could be wrote as following:
``` c++
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
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
```