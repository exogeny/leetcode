#include "solution.h"

using std::string;

int Solution::strStr(string haystack, string needle)
{
    if (needle.size() > haystack.size())
        return -1;

    unsigned int i, j;
    unsigned int nsize = needle.size();

    for (i = 0; i < haystack.size() - nsize; i++)
    {
        if (haystack[i] == needle[0])
        {
            for (j = 1; j < nsize; j++)
            {
                if (haystack[i + j] != needle[j])
                    break;

                if (j == nsize - 1)
                    return i;
            }
        }
    }
    return -1;
}
