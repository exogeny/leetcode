#ifndef __SUPPORT_H__
#define __SUPPORT_H__

#include <iostream>
#include <string>
#include <vector>

#include "solution.h"

int stringToInteger(string input);
double stringToDouble(string input);
void trimLeftTrailingSpaces(std::string& input);
std::vector<int> stringToIntegerVector(std::string input);

/**
 * Print the list.
 */
void printList(ListNode* l);

#endif