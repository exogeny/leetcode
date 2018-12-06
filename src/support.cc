#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

#include "support.hpp"

int stringToInteger(std::string input)
{
    return stoi(input);
}

double stringToDouble(std::string input)
{
    return stod(input);
}

void trimLeftTrailingSpaces(std::string& input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
        return !isspace(ch);
    }));
}

void trimRightTrailingSpaces(std::string& input) {
    input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), input.end());
}

std::vector<int> stringToIntegerVector(std::string input) {
    std::vector<int> output;
    trimLeftTrailingSpaces(input);
    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() - 2);
    std::stringstream ss;
    ss.str(input);
    std::string item;
    char delim = ',';
    while (getline(ss, item, delim)) {
        output.push_back(stoi(item));
    }
    return output;
}

void printList(ListNode* l)
{
    while (l)
    {
        std::cout << l-> val;
        if (l->next)
            std::cout << "->";
        l = l->next;
    }
}

bool vectorintEqual(std::vector<int>& v1, std::vector<int>& v2)
{
    if (v1.size() != v2.size())
        return false;

    int i;
    int size = v1.size();
    for (i = 0; i < size; i++)
    {
        if (v1[i] != v2[i])
            return false;
    }
    return true;
}

ListNode* stringToListNode(std::string input)
{
    std::vector<int> list = stringToIntegerVector(input);

    ListNode* dummyRoot = new ListNode(0);
    ListNode* ptr = dummyRoot;
    for (int item : list)
    {
        ptr->next = new ListNode(item);
        ptr = ptr->next;
    }

    ptr = dummyRoot->next;
    delete dummyRoot;

    return ptr;
}

std::string listNodeToString(ListNode* node) {
    if (node == nullptr) {
        return "[]";
    }

    std::string result;
    while (node) {
        result += std::to_string(node->val) + ", ";
        node = node->next;
    }
    return "[" + result.substr(0, result.length() - 2) + "]";
}

void freeList(ListNode* root)
{
    ListNode* tmp;
    while (root)
    {
        tmp = root;
        root = root->next;
        delete tmp;
    }
}