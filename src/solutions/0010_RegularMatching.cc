#include <vector>
#include <algorithm>
#include <sstream>

#include "solution.hpp"

using std::string;
using std::vector;

/**
 * Recursion Version
bool Solution::isMatchRecursion(string s, string p)
{

    if (p.size() == 0)
        return s.size() == 0;

    bool firstMatch = (s.size() != 0 && (s[0] == p[0] || p[0] == '.'));

    if (p.size() >= 2 && p[1] == '*')
        return (isMatchRecursion(s, p.substr(2)) || (firstMatch && isMatchRecursion(s.substr(1), p)));

    return (firstMatch && isMatchRecursion(s.substr(1), p.substr(1)));
}
*/

bool Solution::isMatch(string s, string p)
{
    bool firstMatch;
    int slen = s.size();
    int plen = p.size();
    int i, j;
    vector<vector<bool> > results(slen + 1, vector<bool>(plen + 1, false));
    results[slen][plen] = true;

    for (i = slen;i >= 0; i--)
    {
        for (j = plen - 1; j >= 0; j--)
        {
            firstMatch = (i < slen && (s[i] == p[j] || p[j] == '.'));
            if (j + 1 < plen && p[j + 1] == '*')
            {
                results[i][j] = results[i][j + 2] || (firstMatch && results[i + 1][j]);
            }
            else
            {
                results[i][j] = firstMatch && results[i + 1][j + 1];
            }
        }
    }
    return results[0][0];
}
