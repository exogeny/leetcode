#ifndef _CHALLENGE_202008_H_
#define _CHALLENGE_202008_H_

#include <string>
#include <vector>
#include "prototype/treenode.h"

class Challenge
{
public:
  // Week 1

  /**
   * 1. Detect Capital
   *
   * Given a word, you need to judge whether the usage of capitals in it is
   * right or not.
   * We define the usage of capitals in a word to be right when one of the
   * following cases holds:
   * 1. All letters in this word are capitals, like "USA"/
   * 2. All letters in this word are not capitals, like "leetcode".
   * 3. Only the first letter in this word is capital, like "Google".
   * 4. Otherwise, we define that this word doesn't use capitals in a right way.
   **/
  bool detectCapitalUse(std::string word);

  /**
   * 2. Design HashSet
   *
   * Design a HashSet without using any built-in hash table libraries.
   * To be specific, your design should include these functions:
   *  * add(value): Insert a value into the HashSet.
   *  * contains(value) : Return whether the value exists in the HashSet or not.
   *  * remove(value): Remove a value in the HashSet. If the value does not
   *    exist in the HashSet, do nothing.
   **/
  class MyHashSet {
  private:
    struct HashNode
    {
      int _v;
      HashNode *_next;
      HashNode(int p)
        :_next(NULL), _v(p)
      { }
    };

    std::vector<HashNode*> _table;
    size_t _size;

    int _getIndex(int key);
    void _checkCapacity();
  public:
    MyHashSet();
    MyHashSet(size_t size);
    ~MyHashSet();

    void add(int key);
    void remove(int key);

    /**
     * Returns true if this set contains the specified element.
     **/
    bool contains(int key);
  };

  /**
   * 3. Valid Palindrome
   *
   * Given a string, determine if it is a palindrome, considering only
   * alphanumeric characters and ignoring cases.
   * Note: For the purpose of this problem, we define empty string as valid
   * palindrome.
   **/
  bool isPalindrome(std::string s);

  /**
   * 4. Power of Four
   *
   * Given an integer (signed 32 bits), write a function to check whether it is
   * a power of 4.
   *
   * Follow up: Could you solve it without loops/recursion?
   **/
  bool isPowerOfFour(int num);

  /**
   * 5. Add and Search Word - Data structure design
   *
   * You should design a data structure that supports adding new words and
   * finding if a string matches any previously added string.
   * Implement the WordDictionary class:
   *  * WordDictionary() Initializes the object.
   *  * void addWord(word) adds word to the data structure, it can be matched
   *    later.
   *  * bool search(word) returns true if there is any string in the data
   *    structure that matches word or false otherwise. word may contain
   *    dots '.' where dots can be matched with any letter.
   **/
  class WordDictionary
  {
  private:
    struct WordNode
    {
      bool endding;
      WordNode *children[26];
    };

    WordNode *root;
    bool searchNode(const std::string &word, size_t index, WordNode *node);
  public:
    WordDictionary();
    ~WordDictionary();
    void addWord(std::string word);
    bool search(std::string word);
  };

  /**
   * 6. Find All Duplicates in an Array
   *
   * Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements
   * appear twice and others appear once.
   * Find all the elements that appear twice in this array.
   * Could you do it without extra space and in O(n) runtime?
   **/
  std::vector<int> findDuplicates(std::vector<int>& nums);

  /**
   * 7. Vertical Order Traversal of a Binary Tree
   *
   * Given a binary tree, return the vertical order traversal of its nodes
   * values. For each node at position (X, Y), its left and right children
   * respectively will be at positions (X-1, Y-1) and (X+1, Y-1). Running a
   * vertical line from X = -infinity to X = +infinity, whenever the vertical
   * line touches some nodes, we report the values of the nodes in order from
   * top to bottom (decreasing Y coordinates). If two nodes have the same
   * position, then the value of the node that is reported first is the value
   * that is smaller. Return an list of non-empty reports in order of X
   * coordinate.  Every report will have a list of values of nodes.
   **/
  std::vector<std::vector<int>> verticalTraversal(TreeNode* root);
};

#endif
