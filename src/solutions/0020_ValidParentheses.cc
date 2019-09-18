#include "solution.hpp"

using std::string;
using std::vector;

bool Solution::isValid(string s)
{
    bool result;
    vector<char> stack;
    for (char c : s)
    {
        switch (c)
        {
        case '(':
            stack.push_back(')');
            break;
        case '{':
            stack.push_back('}');
            break;
        case '[':
            stack.push_back(']');
            break;

        case ')':
        case '}':
        case ']':
            if (stack.empty() || stack.back() != c)
                return false;
            stack.pop_back();
            break;
        }
    }

    return stack.size() == 0;
}
