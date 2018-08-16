#ifndef __SUPPORT_H__
#define __SUPPORT_H__

#include <iostream>
#include <string>
#include <vector>

int stringToInteger(string input);
double stringToDouble(string input);
void trimLeftTrailingSpaces(std::string & input);
void trimRightTrailingSpaces(std::string & input);
std::vector<int> stringToIntegerVector(std::string input);

#endif