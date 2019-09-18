#include "solution.hpp"

using std::string;
using std::vector;

string Solution::commonPrefix(string &left, string &right)
{
    int minlength = min(left.size(), right.size());
    for (int i = 0; i < minlength; i++)
    {
        if (left[i] != right[i])
            return left.substr(0, i);
    }
    return left.substr(0, minlength);
}

string Solution::longestCommonPrefix(vector<string> &strs)
{
    if (strs.size() == 0)
        return "";

    return longestCommonPrefix(strs, 0, strs.size() - 1);
}

string Solution::longestCommonPrefix(vector<string> &strs, int l, int r)
{
    if (l == r)
        return strs[l];

    int mid = (l + r) / 2;
    string left = longestCommonPrefix(strs, l, mid);
    string right = longestCommonPrefix(strs, mid + 1, r);
    return commonPrefix(left, right);
}
