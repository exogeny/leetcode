#ifndef __SUPPORT_H__
#define __SUPPORT_H__

#include <iostream>
#include <string>
#include <vector>

#include "listnode.h"
#include "treenode.h"

/**
 * Convert the string to Integer.
 **/
int stringToInteger(std::string input);

/**
 * Convert the string to Double.
 **/
double stringToDouble(std::string input);

/**
 * trim the space of the string on left.
 **/
void trimLeftTrailingSpaces(std::string& input);

/**
 * Convert the string to vectot<int>.
 *
 * For Example:
 * The string "[1, 2, 3]" will return {1, 2, 3}.
 **/
std::vector<int> stringToIntegerVector(const std::string &input);

/**
 * Print the list.
 */
void printList(ListNode* l);

/**
 * Convert the string to list node.
 **/
ListNode* stringToListNode(const std::string &input);

/**
 * Convert the listnode to string for compare.
 **/
std::string listNodeToString(ListNode* node);

/**
 * Free the List
 */
void freeList(ListNode* root);

/**
 * compare function of vectors.
 **/
bool compare_fn(std::vector<int> &v1, std::vector<int> &v2);

/**
 * Convert binary tree to string.
 **/
std::string treeNodeToString(TreeNode* root);

/**
 * Build binary tree from string.
 **/
TreeNode* stringToTreeNode(std::string input);

/**
 * Print the binary tree.
 **/
void prettyPrintTree(TreeNode* node, std::string prefix, bool isLeft);

#endif