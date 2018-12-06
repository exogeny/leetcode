#ifndef __SUPPORT_H__
#define __SUPPORT_H__

#include <iostream>
#include <string>
#include <vector>

#include "solution.hpp"

int stringToInteger(std::string input);
double stringToDouble(std::string input);
void trimLeftTrailingSpaces(std::string& input);
std::vector<int> stringToIntegerVector(std::string input);

/**
 * Print the list.
 */
void printList(ListNode* l);

bool vectorintEqual(std::vector<int>& v1, std::vector<int>& v2);

/**
 * Convert the string to list node.
 **/
ListNode* stringToListNode(std::string input);

/**
 * Convert the listnode to string for compare.
 **/
std::string listNodeToString(ListNode* node);

/**
 * Free the List
 */
void freeList(ListNode* root);

#endif