#ifndef __SOLUTION_H__
#define __SOLUTION_H__

#include <iostream>
#include <string>
#include <vector>

#include "listnode.h"

#define MAX(i, j) ((i) > (j) ? (i) : (j))
#define MIN(i, j) ((i) > (j) ? (j) : (i))
#ifndef ABS
#define ABS(x) ((x) < 0 ? -(x) : (x))
#endif

class Solution
{
private:
    inline int max(int i, int j) { return (i > j ? i : j); }
    inline int min(int i, int j) { return (i > j ? j : i); }

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

    /**
     * This function is write for longest common prefix using 'divide and conquer'.
     */
    std::string longestCommonPrefix(std::vector<std::string> &strs, int l, int r);

public:
    /* 1. Two Sum */
    std::vector<int> twoSum(std::vector<int> &nums, int target);
    /* 2. Add Two Numbers */
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2);

    int lengthOfLongestSubstring(std::string s);
    double findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2);
    std::string longestPalindrome(std::string s);
    double pow(double x, int n);

    /**
     * 6. ZigZag Conversion
     *
     * The string "PAYPALISHIRING" is written in a zigzag pattern on a given
     * number of rows like this: (you may want to display this pattern in a
     * fixed font for better legibility)
     *  P   A   H   N
     *  A P L S I I G
     *  Y   I   R
     *
     * And then read line by line: "PAHNAPLSIIGYIR"
     *
     * https://leetcode.com/problems/zigzag-conversion/
     **/
    std::string convert(std::string s, int numRows);

    /**
     * 7. Reverse Integer
     *
     * Given a 32-bit signed integer, reverse digits of an integer.
     * Note:
     * Assume we are dealing with an environment which could only store integers
     * within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose
     * of this problem, assume that your function returns 0 when the reversed
     * integer overflows.
     *
     * https://leetcode.com/problems/reverse-integer/
     **/
    int reverse(int x);

    /**
     * 8. String to Integer (atoi)
     *
     * Implement atoi which converts a string to an integer.
     * The function first discards as many whitespace characters as necessary
     * until the first non-whitespace character is found. Then, starting from
     * this character, takes an optional initial plus or minus sign followed
     * by as many numerical digits as possible, and interprets them as a
     * numerical value.
     *
     * The string can contain additional characters after those that form the
     * integral number, which are ignored and have no effect on the behavior of
     * this function.
     * If the first sequence of non-whitespace characters in str is not a valid
     * integral number, or if no such sequence exists because either str is
     * empty or it contains only whitespace characters, no conversion is
     * performed.
     *
     * If no valid conversion could be performed, a zero value is returned.
     *
     * Note:
     *  -> Only the space character ' ' is considered as whitespace character.
     *  -> Assume we are dealing with an environment which could only store
     * integers within the 32-bit signed integer range: [−2^31,  2^31 − 1].
     * If the numerical value is out of the range of representable values,
     * INT_MAX (2^31 − 1) or INT_MIN (−2^31) is returned.
     **/
    int myAtoi(std::string str);

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
     * 10. Regular Expression Matching
     *
     * Given an input string (s) and a pattern (p), implement regular expression
     * matching with support for '.' and '*'.
     *
     * '.' Matches any single character.
     * '*' Matches zero or more of the preceding element.
     *
     * The matching should cover the entire input string (not partial).
     *
     * Note:
     * s could be empty and contains only lowercase letters a-z.
     * p could be empty and contains only lowercase letters a-z, and characters like . or *.
     *
     * https://leetcode.com/problems/regular-expression-matching/
     **/
    bool isMatch(std::string s, std::string p);

    /**
     * 11. Container With Most Water
     *
     * Given n non-negative integers a1, a2, ..., an , where each represents a
     * point at coordinate (i, ai). n vertical lines are drawn such that the two
     * endpoints of line i is at (i, ai) and (i, 0). Find two lines, which
     * together with x-axis forms a container, such that the container contains
     * the most water.
     *
     * Note: You may not slant the container and n is at least 2.
     **/
    int maxArea(std::vector<int>& height);

    /**
     * 12. Integer to Roman
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
     * For example, two is written as II in Roman numeral, just two one's added
     * together. Twelve is written as, XII, which is simply X + II. The number
     * twenty seven is written as XXVII, which is XX + V + II.
     *
     * Roman numerals are usually written largest to smallest from left to
     * right. However, the numeral for four is not IIII. Instead, the number
     * four is written as IV. Because the one is before the five we subtract
     * it making four. The same principle applies to the number nine, which
     * is written as IX. There are six instances where subtraction is used:
     *
     *  -> I can be placed before V (5) and X (10) to make 4 and 9.
     *  -> X can be placed before L (50) and C (100) to make 40 and 90.
     *  -> C can be placed before D (500) and M (1000) to make 400 and 900.
     *
     * Given an integer, convert it to a roman numeral. Input is guaranteed to
     * be within the range from 1 to 3999.
     **/
    std::string intToRoman(int num);

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
    int romanToInt(std::string s);

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
    std::string longestCommonPrefix(std::vector<std::string> &strs);

    /**
     * This function is not a task, write for `longestCommonPrefix`.
     * Input the two strings, so we get the common prefix of the
     * two strings.
     */
    std::string commonPrefix(std::string &left, std::string &right);

    /**
     * 15. 3Sum
     *
     * Given an array nums of n integers, are there elements a, b, c in nums
     * such that a + b + c = 0? Find all unique triplets in the array which
     * gives the sum of zero.
     *
     * Note: The solution set must not contan duplicate triplets.
     **/
    std::vector<std::vector<int>> threeSum(std::vector<int> &nums);

    /**
     * 16. 3Sum Closest
     *
     * Given an array nums of n integers and an integer target, find three
     * integers in nums such that the sum is closest to target. Return the
     * sum of the three integers. You may assume that each input would have
     * exactly one solution.
     *
     * https://leetcode.com/problems/3sum-closest/
     **/
    int threesumClosest(std::vector<int>& nums, int target);

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
    bool isValid(std::string s);

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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2);

    /**
     * 22. Generate Parentheses
     *
     * Given n pairs of parentheses, write a function to generate all
     * combinations of well-formed parentheses.
     *
     * For example, given n = 3, a solution set is:
     * [
     *  "((()))",
     *  "(()())",
     *  "(())()",
     *  "()(())",
     *  "()()()"
     * ]
     */
    std::vector<std::string> generateParenthesis(int n);

    /**
     * 25. Reverse Nodes in k-Group
     * Given a linked list, reverse the nodes of a linked list k at a time and
     * return its modified list. k is a positive integer and is less than or
     * equal to the length of the linked list. If the number of nodes is not
     * a multiple of k then left-out nodes in the end should remain as it is.
     *
     * https://leetcode.com/problems/reverse-nodes-in-k-group/
     **/
    ListNode* reverseKGroup(ListNode* head, int k);

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
    int removeDuplicates(std::vector<int> &nums);

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
    int removeElement(std::vector<int> &nums, int val);

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
    int strStr(std::string haystack, std::string needle);

    /**
     * 30. Substring with Concatenation of All Words
     *
     * You are given a string, s, and a list of words, words, that are all of
     * the same length. Find all starting indices of substring(s) in s that is
     * a concatenation of each word in words exactly once and without any
     * intervening characters.
     *
     * Example 1:
     *   Input:
     *     s = "barfoothefoobarman",
     *     words = ["foo","bar"]
     *   Output: [0,9]
     *   Explanation: Substrings starting at index 0 and 9 are "barfoo" and
     *     "foobar" respectively.
     *   The output order does not matter, returning [9,0] is fine too.
     *
     * Example 2:
     *   Input:
     *     s = "wordgoodgoodgoodbestword",
     *     words = ["word","good","best","word"]
     *   Output: []
     *
     * https://leetcode.com/problems/substring-with-concatenation-of-all-words/
     **/
    std::vector<int> findSubstring(
        std::string s, std::vector<std::string>& words);

    /**
     * 31. Next Permutation
     *
     * Implement next permutation, which rearranges numbers into the
     * lexicographically next greater permutation of numbers.
     * If such arrangement is not possible, it must rearrange it as the
     * lowest possible order (ie, sorted in ascending order).
     * The replacement must be in-place and use only constant extra memory.
     * Here are some examples. Inputs are in the left-hand column and its
     * corresponding outputs are in the right-hand column.
     * 1,2,3 → 1,3,2
     * 3,2,1 → 1,2,3
     * 1,1,5 → 1,5,1
     *
     * https://leetcode.com/problems/next-permutation/
     **/
    void nextPermutation(std::vector<int>& nums);

    /**
     * 32. Longest Valid Parentheses
     *
     * Given a string containing just the characters '(' and ')', find the
     * length of the longest valid (well-formed) parentheses substring.
     *
     * Example 1:
     *  Input: "(()"
     *  Output: 2
     *  Explanation: The longest valid parentheses substring is "()"
     *
     * Example 2:
     *  Input: ")()())"
     *  Output: 4
     *  Explanation: The longest valid parentheses substring is "()()"
     *
     * https://leetcode.com/problems/longest-valid-parentheses/
     **/
    int longestValidParentheses(std::string s);

    /**
     * 33. Search in Rotated Sorted Array
     *
     * Suppose an array sorted in ascending order is rotated at some pivot
     * unknown to you beforehand. (i.e., [0,1,2,4,5,6,7] might become
     * [4,5,6,7,0,1,2]). You are given a target value to search. If found in
     * the array return its index, otherwise return -1. You may assume no
     * duplicate exists in the array. Your algorithm's runtime complexity must
     * be in the order of O(log n).
     *
     * https://leetcode.com/problems/search-in-rotated-sorted-array/
     **/
    int search(std::vector<int> &nums, int target);

    /**
     * 34. Find First and Last Position of Element in Sorted Array
     *
     * Given an array of integers nums sorted in ascending order, find the
     * starting and ending position of a given target value.
     * Your algorithm's runtime complexity must be in the order of O(log n).
     * If the target is not found in the array, return [-1, -1].
     *
     * https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
     **/
    std::vector<int> searchRange(std::vector<int> &num, int target);

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
    int searchInsert(std::vector<int> &nums, int target);

    /**
     * 36. Valid Sudoku
     *
     * Determine if a 9x9 Sudoku board is valid. Only the filled cells need to
     * be validated according to the following rules:
     * 1. Each row must contain the digits 1-9 without repetition.
     * 2. Each column must contain the digits 1-9 without repetition.
     * 3. Each of the 9 3x3 sub-boxes of the grid must contain the digits 1-9
     *    without repetition.
     * The Sudoku board could be partially filled, where empty cells are filled
     * with the character '.'.
     *
     * https://leetcode.com/problems/valid-sudoku/
     **/
    bool isValidSudoku(std::vector<std::vector<char>> &board);

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
    std::string countAndSay(int n);

    /**
     * 39. Combination Sum
     *
     * Given a set of candidate numbers (candidates) (without duplicates) and
     * a target number (target), find all unique combinations in candidates
     * where the candidate numbers sums to target.
     *
     * The same repeated number may be chosen from candidates unlimited number
     * of times.
     *
     * Noete:
     *  1. All numbers (including target) will be positive integers.
     *  2. The solution set must not contain duplicate combinations.
     *
     * https://leetcode.com/problems/combination-sum/
     **/
    std::vector<std::vector<int>> combinationSum(
        std::vector<int> &candidates, int target);

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
    int maxSubArray(std::vector<int> &nums);

    /**
     * 58. Length of Last Word
     *
     * Given a string s consists of upper/lower-case alphabets and empty space characters ' ',
     * return the length of last word in the string.If the last word does not exist, return 0.
     *
     * Note: A word is defined as a character sequence consists of non-space characters only.
     * Example:
     * Input: "Hello World"
     * Output: 5
     */
    int lengthOfLastWord(std::string s);

    /**
     * 66. Plus One
     *
     * Given a non-empty array of digits representing a non-negative integer, plus one to the
     * integer.
     * The digits are stored such that the most significant digit is at the head of the list,
     * and each element in the array contain a single digit.
     * You may assume the integer does not contain any leading zero, except the number 0 itself.
     *
     * Example 1:
     * Input: [1,2,3]
     * Output: [1,2,4]
     * Explanation: The array represents the integer 123.
     *
     * Example 2:
     * Input: [4,3,2,1]
     * Output: [4,3,2,2]
     * Explanation: The array represents the integer 4321.
     *
     * https://leetcode.com/problems/plus-one/description/
     */
    std::vector<int> plusOne(std::vector<int> &digits);

    /**
     * 67. Add Binary
     *
     * Given two binary strings, return their sum (also a binary string).
     * The input strings are both non-empty and contains only characters 1 or 0.
     *
     * Example2:
     * Input: a = "11", b = "1"
     * Output: "100"
     *
     * Example2
     * Input: a = "1010", b = "1011"
     * Output: "10101"
     *
     * https://leetcode.com/problems/add-binary/description/
     */
    std::string addBinary(std::string a, std::string b);

    /**
     * 70. Climbing Stairs
     * You are climbing a stair case. It takes n steps to reach to the top.
     * Each time you can either climb 1 or 2 steps. In how many distinct ways
     * can you climb to the top?
     * Note: Given n will be a positive integer.
     *
     * Example 1:
     * Input: 2
     * Output: 2
     * Explanation: There are two ways to climb to the top.
     * 1. 1 step + 1 step
     * 2. 2 steps
     *
     * Example 2:
     * Input: 3
     * Output: 3
     * Explanation: There are three ways to climb to the top.
     * 1. 1 step + 1 step + 1 step
     * 2. 1 step + 2 steps
     * 3. 2 steps + 1 step
     *
     * https://leetcode.com/problems/climbing-stairs/description/
     */
    int climbStairs(int n);

    /**
     * 83. Remove Duplicates from Sorted List
     *
     * Given a sorted linked list, delete all duplicates such that each element appear only once.
     *
     * Example 1:
     * Input: 1->1->2
     * Output: 1->2
     *
     * Example 2:
     * Input: 1->1->2->3->3
     * Output: 1->2->3
     *
     * https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
     */
    ListNode *deleteDuplicates(ListNode *head);

    /**
     * 88. Merge Sorted Array
     *
     * Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
     * Note:
     *  * The number of elements initialized in nums1 and nums2 are m and n respectively.
     *  * You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold
     *    additional elements from nums2.
     *
     * Example:
     * nums1 = [1,2,3,0,0,0], m = 3
     * nums2 = [2,5,6],       n = 3
     *
     * Output: [1,2,2,3,5,6]
     *
     * https://leetcode.com/problems/merge-sorted-array/description/
     **/
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n);
};
#endif