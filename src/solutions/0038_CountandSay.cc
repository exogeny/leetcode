#include <sstream>
#include "solution.h"

using std::string;

string Solution::countAndSay(int n)
{
    if (n <= 0)
        return "";
    if (n == 1)
        return "1";

    string pre = countAndSay(n - 1);
    std::stringstream result;
    string::const_iterator slow = pre.begin();
    string::const_iterator quick = slow + 1;

    while (quick != pre.end())
    {
        if (*quick != *slow)
        {
            result << (quick - slow) << (*slow);
            slow = quick;
        }

        quick++;
    }
    result << (quick - slow) << (*slow);

    return result.str();
}
