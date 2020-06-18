#include "solution.h"

using std::string;

int Solution::lengthOfLastWord(string s)
{
    if (s.size() == 0)
        return 0;

    unsigned int size = s.size();
    int index = size - 1;
    while (s[index] == ' ')
    {
        size--;
        index--;
    }
    while (index > 0)
    {
        if (s[index] == ' ')
        {
            break;
        }
        index--;
    }

    if (index == 0 && s[0] != ' ')
        index--;

    return (size - index - 1);
}
