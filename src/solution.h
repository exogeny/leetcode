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
    ListNode * next;
    ListNode(int x) : val(x), next(NULL) { }
};

class Solution {
private:
    inline int max(int i, int j) { return (i > j ? i : j); }
    inline int min(int i, int j) { return (i > j ? j : i); }
    int expandAroundCenter(string s, int left, int right);
    
    /**
     * This function is write for longest common prefix using 'divide and conquer'.
     */
    string longestCommonPrefix(vector<string>& strs, int l, int r);
public:
    int lengthOfLongestSubstring(string s);
    vector<int> twoSum(vector<int>& nums, int target);
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
    string longestPalindrome(string s);
    int reverse(int x);
    vector<vector<int>> threeSum(vector<int>& nums);
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
    string longestCommonPrefix(vector<string>& strs);

    /**
     * This function is not a task, write for `longestCommonPrefix`.
     * Input the two strings, so we get the common prefix of the
     * two strings.
     */ 
    string commonPrefix(string& left, string& right);

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
     */
    bool isValid(string s);
};
#endif