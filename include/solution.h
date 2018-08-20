#ifndef __SOLUTION_H__
#define __SOLUTION_H__

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
  private:
    inline int max(int i, int j) { return (i > j ? i : j); }
    inline int min(int i, int j) { return (i > j ? j : i); }
    inline int max3(int i, int j, int k) { return max(max(i, j), k); }

    /**
     * This function is write for getting the length of a list.
     */
    inline int getListLength(ListNode *l)
    {
        if (l == NULL)
            return 0;
        int length = 0;
        while (l != NULL)
        {
            length++;
            l = l->next;
        }
        return length;
    }

    int expandAroundCenter(string s, int left, int right);

    /**
     * This function is write for longest common prefix using 'divide and conquer'.
     */
    string longestCommonPrefix(vector<string> &strs, int l, int r);

    /**
     * This function is write for maxSubArray using the divide and conquer approach.
     */
    int maxSubArray(vector<int>& nums, int left, int right);

  public:
    int lengthOfLongestSubstring(string s);
    vector<int> twoSum(vector<int> &nums, int target);
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2);
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2);
    string longestPalindrome(string s);
    int reverse(int x);
    vector<vector<int>> threeSum(vector<int> &nums);
    double pow(double x, int n);

    /**
     * 9. Palindrome Number
     * 
     * Determine whether an integer is a palindrome. An integer is a palindrome
     * when it reads the same backward as forward.
     *  
     * https://leetcode.com/problems/palindrome-number/description/
     */
    bool isPalindrome(int x);

    /**
     * 13. Roman to Integer
     * 
     * Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
     * Symbol       Value
     * I             1
     * V             5
     * X             10
     * L             50
     * C             100
     * D             500
     * M             1000
     * 
     * For example, two is written as II in Roman numeral, just two one's added together.
     * Twelve is written as, XII, which is simply X + II. The number twenty seven is
     *  written as XXVII, which is XX + V + II.
     * 
     * Roman numerals are usually written largest to smallest from left to right. However,
     * the numeral for four is not IIII. Instead, the number four is written as IV. Because
     * the one is before the five we subtract it making four. The same principle applies to
     * the number nine, which is written as IX. There are six instances where subtraction is
     * used:
     * > I can be placed before V (5) and X (10) to make 4 and 9. 
     * > X can be placed before L (50) and C (100) to make 40 and 90. 
     * > C can be placed before D (500) and M (1000) to make 400 and 900.
     * 
     * Given a roman numeral, convert it to an integer. Input is guaranteed to be within the
     *  range from 1 to 3999.
     * 
     * https://leetcode.com/problems/roman-to-integer/description/
     */
    int romanToInt(string s);

    /**
     * 14. Longest Common Prefix
     * 
     * Find the longest common prefix string amongst an array of strings.
     * If there is no common prefix, return an empty string "".
     * 
     * Example 1:
     * Input: ["flower","flow","flight"]
     * Output: "fl"
     * 
     * Example 2:
     * 
     * Input: ["dog","racecar","car"]
     * Output: ""
     * Explanation: There is no common prefix among the input strings.
     * 
     * Note:
     * All given inputs are in lowercase letters a-z.
     * 
     * https://leetcode.com/problems/longest-common-prefix/solution/
     */
    string longestCommonPrefix(vector<string> &strs);

    /**
     * This function is not a task, write for `longestCommonPrefix`.
     * Input the two strings, so we get the common prefix of the
     * two strings.
     */
    string commonPrefix(string &left, string &right);

    /**
     * 20. Valid Parentheses
     * 
     * Given a string containing just the characters '(', ')', '{', '}',
     * '[' and ']', determine if the input string is valid.
     * 
     * An input string is valid if:
     *  1. Open brackets must be closed by the same type of brackets.
     *  2. Open brackets must be closed in the correct order.
     * Note that an empty string is also considered valid.
     * 
     * Example 1:
     * Input: "()[]{}"
     * Output: true
     * 
     * Example 2:
     * Input: "([)]"
     * Output: false
     * 
     * https://leetcode.com/problems/valid-parentheses/description/
     */
    bool isValid(string s);

    /**
     * 21. Merge Two Sorted Lists
     * 
     * Merge two sorted linked lists and return it as a new list.
     * The new list should be made by splicing together the nodes
     * of the first two lists.
     * 
     * Example:
     * Input: 1->2->4, 1->3->4
     * Output: 1->1->2->3->4->4
     * 
     * https://leetcode.com/problems/merge-two-sorted-lists/description/
     */
    ListNode* mergeTwoLists(ListNode *l1, ListNode *l2);

    /**
     * 26. Remove Duplicates from Sorted Array
     * 
     * Given a sorted array nums, remove the duplicates in-place such
     * that each element appear only once and return the new length.
     * Do not allocate extra space for another array, you must do
     * this by modifying the input array in-place with O(1) extra memory.
     * 
     * 
     * https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
     */
    int removeDuplicates(vector<int>& nums);

    /**
     * 27. Remove Element
     * 
     * Given an array nums and a value val, remove all instances of
     * that value in-place and return the new length.
     * Do not allocate extra space for another array, you must do
     * this by modifying the input array in-place with O(1) extra memory.
     * The order of elements can be changed. It doesn't matter what you
     * leave beyond the new length.
     * 
     * Example 1:
     * Given nums = [3,2,2,3], val = 3,
     * Your function should return length = 2, with the first two elements
     * of nums being 2.
     * 
     * Example 2:
     * Given nums = [0,1,2,2,3,0,4,2], val = 2,
     * Your function should return length = 5, with the first five elements
     * of nums containing 0, 1, 3, 0, and 4.
     * 
     * https://leetcode.com/problems/remove-element/description/
     */
    int removeElement(vector<int>& nums, int val);

    /**
     * 28. Implement strStr()
     * 
     * Implement strStr().
     * Return the index of the first occurrence of needle in haystack, or -1
     * if needle is not part of haystack.
     * 
     * Example 1：
     * Input: haystack = "hello", needle = "ll"
     * Output: 2
     * 
     * Example 2:
     * Input: haystack = "aaaaa", needle = "bba"
     * Output: -1
     * 
     * https://leetcode.com/problems/implement-strstr/description/
     */
    int strStr(string haystack, string needle);

    /**
     * 35. Search Insert Position
     * 
     * Given a sorted array and a target value, return the index if the target is
     * found. If not, return the index where it would be if it were inserted in order.
     * You may assume no duplicates in the array.
     * 
     * Example 1:
     * Input: [1, 3, 5, 6], 5
     * Output: 2
     * 
     * Example 2:
     * Input: [1,3,5,6], 2
     * Output: 1
     *
     * https://leetcode.com/problems/search-insert-position/description/
     */
    int searchInsert(vector<int>& nums, int target);

    /**
     * 38. Count and Say
     * 
     * The count-and-say sequence is the sequence of integers with the first five
     * terms as following:
     * 
     * 1.     1
     * 2.     11
     * 3.     21
     * 4.     1211
     * 5.     111221
     * 
     * 1 is read off as "one 1" or 11.
     * 11 is read off as "two 1s" or 21.
     * 21 is read off as "one 2, then one 1" or 1211.
     * Given an integer n, generate the nth term of the count-and-say sequence.
     * 
     * Note: Each term of the sequence of integers will be represented as a string.
     * 
     * Example 1:
     * 
     * Input: 1
     * Output: "1"
     * Example 2:
     * 
     * Input: 4
     * Output: "1211"
     *
     * https://leetcode.com/problems/count-and-say/description/
     */
    string countAndSay(int n);

    /**
     * 53. Maximum Subarray
     *
     * Given an integer array nums, find the contiguous subarray (containing at
     * least one number) which has the largest sum and return its sum.
     *
     * Example:
     * Input: [-2,1,-3,4,-1,2,1,-5,4],
     * Output: 6
     * Explanation: [4,-1,2,1] has the largest sum = 6.
     *
     * Attention: Please use the divide and conquer approach.
     *
     * https://leetcode.com/problems/maximum-subarray/description/
     */
    int maxSubArray(vector<int>& nums);
};
#endif