#include <iostream>
#include <vector>
#include <algorithm>
#include "solution.h"

using std::string;
using std::vector;

static const auto _____ = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();

vector<int> Solution::twoSum(vector<int> &nums, int target)
{
    int i = 0, num1, num2;
    vector<int> copied(nums);
    vector<int> result;
    sort(copied.begin(), copied.end());
    vector<int>::iterator front = copied.begin();
    vector<int>::iterator tail = copied.end() - 1;
    while (front != tail)
    {
        if (target == *front + *tail)
            break;
        if (target < *front + *tail)
            tail--;
        else
            front++;
    }
    num1 = *front;
    num2 = *tail;
    for (i = 0, front = nums.begin(); front != nums.end(); front++, i++)
    {
        if (*front == num1 || *front == num2)
        {
            result.push_back(i);
        }
    }
    return result;
}

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *pHead = new ListNode(0);
    ListNode *curr = pHead;
    int carry = 0;
    int sum = 0;
    while (l1 || l2)
    {
        sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        l1 = (l1 ? l1->next : NULL);
        l2 = (l2 ? l2->next : NULL);
        carry = sum / 10;
        sum = sum % 10;
        curr->next = new ListNode(sum);
        curr = curr->next;
    }
    if (carry > 0)
    {
        curr->next = new ListNode(carry);
    }
    curr = pHead;
    pHead = pHead->next;
    free(curr);
    return pHead;
}

int Solution::lengthOfLongestSubstring(string s)
{
    int len = s.size(), result = 0, tmp = 0, i, j;
    int *index = new int[128]();
    for (i = 0, j = 0; j < len; j++)
    {
        tmp = (int)s[j];
        i = max(index[tmp], i);
        result = max(result, j - i + 1);
        index[tmp] = j + 1;
    }
    delete[] index;
    return result;
}

double Solution::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int imin, imax, i, j, halfLen;
    int m = nums1.size();
    int n = nums2.size();
    vector<int> A = vector<int>(m > n ? nums1 : nums2);
    vector<int> B = vector<int>(m > n ? nums2 : nums1);
    if (m > n)
    {
        m = m + n;
        n = m - n;
        m = m - n;
    }
    imin = 0;
    imax = m;
    halfLen = (m + n + 1) / 2;
    while (imin <= imax)
    {
        i = (imin + imax) / 2;
        j = halfLen - i;
        std::cout << "imin = " << imin << ", imax = " << imax << "\n";
        std::cout << "i = " << i << ", j = " << j << "\n";
        if (i < imax && B[j - 1] > A[i])
            imin = imin + 1;
        else if (i > imin && A[i - 1] > B[j])
            imax = imax - 1;
        else
        {
            int maxLeft = 0;
            if (i == 0)
                maxLeft = B[j - 1];
            else if (j == 0)
                maxLeft = A[i - 1];
            else
                maxLeft = max(A[i - 1], B[j - 1]);
            if ((m + n) % 2 == 1)
                return maxLeft;

            int minRight = 0;
            if (i == m)
                minRight = B[j];
            else if (j == n)
                minRight = A[i];
            else
                minRight = min(B[j], A[i]);

            return (maxLeft + minRight) / 2.0;
        }
    }
    return 0.0;
}

int Solution::expandAroundCenter(string s, int left, int right)
{
    while (left >= 0 && right < s.size() && s[left] == s[right])
    {
        left--;
        right++;
    }
    return right - left - 1;
}

string Solution::longestPalindrome(string s)
{
    int i, start = 0, count = 0;
    int len, len1, len2;
    for (i = 0; i < s.size(); i++)
    {
        len1 = expandAroundCenter(s, i, i);
        len2 = expandAroundCenter(s, i, i + 1);
        len = max(len1, len2);
        if (len > count)
        {
            start = i - (len - 1) / 2;
            count = len;
        }
    }
    return s.substr(start, count);
}

int Solution::reverse(int x)
{
    int result = 0, temp;
    while (x != 0)
    {
        temp = result * 10 + x % 10;
        if (temp / 10 != result)
            return 0;
        result = temp;
        x = x / 10;
    }
    return result;
}

vector<vector<int>> Solution::threeSum(vector<int> &nums)
{
    if (nums.size() < 2)
        return {};
    int index, start, end, sum;
    int len = nums.size();
    vector<int> copied = vector<int>(nums);
    vector<vector<int>> ret;

    sort(copied.begin(), copied.end());

    for (index = 0; index < len - 1;)
    {
        start = index + 1, end = len - 1;
        while (start < end)
        {
            sum = copied[index] + copied[start] + copied[end];
            if (sum == 0)
            {
                ret.push_back({copied[index], copied[start], copied[end]});
                start++;
                end--;
                // skip the same numbers
                while (start < end && copied[start] == copied[start + 1])
                    start++;
                while (start < end && copied[end] == copied[end - 1])
                    end--;
            }
            else if (sum < 0)
            {
                start++;
                // skip the same numbers
                while (start < end && copied[start] == copied[start + 1])
                    start++;
            }
            else
            {
                end--;
                // skip the same numbers
                while (start < end && copied[end] == copied[end - 1])
                    end--;
            }
        }
        index++;
        // skip the same condition
        while (index < len - 1 && copied[index] == copied[index + 1])
            index++;
    }

    return ret;
}

double Solution::pow(double x, int n)
{
    double ans = 1;
    unsigned long long p;
    if (n < 0)
    {
        p = -n;
        x = 1 / x;
    }
    else
        p = n;
    while (p)
    {
        if (p & 1)
            ans *= x;
        x *= x;
        p >>= 1;
    }
    return ans;
}

bool Solution::isPalindrome(int x)
{
    // No need to push the value to vector, just use int.
    // And no need to know the length of x, just compare the reverted number with x.

    // Special cases:
    // when x < 0, x is not a palindrome.
    // Also if the last digit of the number is 0, in order to be a palindrome,
    // the first digit of the number also needs to be 0.
    // Only 0 satisfy this property.
    if (x < 0 || (x != 0 && x % 10 == 0))
        return false;

    // Since we divided the number by 10, and multiplied the reversed number by 10, when the original number is
    // less than the reversed number, it means we've processed half of the number digits.
    int revertedNumber = 0;
    while (x > revertedNumber)
    {
        revertedNumber = revertedNumber * 10 + x % 10;
        x /= 10;
    }

    // When the length is an odd number, we can get rid of the middle digit by revertedNumber/10
    // For example when the input is 12321, at the end of the while loop we get x = 12, revertedNumber = 123,
    // since the middle digit doesn't matter in palidrome(it will always equal to itself),
    // we can simply get rid of it.
    return (x == revertedNumber) || (x == revertedNumber / 10);
}

int Solution::romanToInt(string s)
{
    int i, sum = 0;
    int current, last = 1000;
    int length = s.size();

    for (i = 0; i < length; i++)
    {
        // just map the value
        switch (s[i])
        {
            case 'I': current =    1; break;
            case 'V': current =    5; break;
            case 'X': current =   10; break;
            case 'L': current =   50; break;
            case 'C': current =  100; break;
            case 'D': current =  500; break;
            case 'M': current = 1000; break;
        }

        // only the last value smaller than current, the two can combine together.
        if (current > last)
            sum -= 2 * last;
        
        sum += current;
        last = current;
    }

    return sum;
}

string Solution::commonPrefix(string& left, string& right)
{
    int minlength = min(left.size(), right.size());
    for (int i = 0; i < minlength; i++)
    {
        if (left[i] != right[i])
            return left.substr(0, i);
    }
    return left.substr(0, minlength);
}

string Solution::longestCommonPrefix(vector<string>& strs)
{
    if (strs.size() == 0) return "";

    return longestCommonPrefix(strs, 0, strs.size() - 1);
}

string Solution::longestCommonPrefix(vector<string>& strs, int l, int r)
{
    if (l == r) return strs[l];
    
    int mid = (l + r) / 2;
    string left = longestCommonPrefix(strs, l, mid);
    string right = longestCommonPrefix(strs, mid + 1, r);
    return commonPrefix(left, right);
}

bool Solution::isValid(string s)
{
    bool result;
    vector<char> stack;
    for (char c : s)
    {
        switch (c)
        {
        case '(': stack.push_back(')'); break;
        case '{': stack.push_back('}'); break;
        case '[': stack.push_back(']'); break;

        case ')':
        case '}':
        case ']':
            if (stack.empty() || stack.back()  != c) return false;
            stack.pop_back();
            break;                
        }
    }

    return stack.size() == 0;
}
