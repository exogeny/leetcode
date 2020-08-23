#include "solution.h"
#include <algorithm>

using std::string;
using std::vector;

static string commonPrefix(string &left, string &right)
{
    int minlength = std::min(left.size(), right.size());
    for (int i = 0; i < minlength; i++)
    {
        if (left[i] != right[i])
            return left.substr(0, i);
    }
    return left.substr(0, minlength);
}

static string internalCommonPrefix(vector<string> &strs, int l, int r)
{
    if (l == r)
        return strs[l];

    int mid = (l + r) / 2;
    string left = internalCommonPrefix(strs, l, mid);
    string right = internalCommonPrefix(strs, mid + 1, r);
    return commonPrefix(left, right);
}

string Solution::longestCommonPrefix(vector<string> &strs)
{
    if (strs.size() == 0)
        return "";

    return internalCommonPrefix(strs, 0, strs.size() - 1);
}
