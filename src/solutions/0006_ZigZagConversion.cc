#include "solution.hpp"

using std::string;

string Solution::convert(string s, int numRows)
{
    /**
     * For all whole numbers k,
     *   > Characters in row 0 are located at indexes k (2 * numRows - 2).
     *   > Characters in row numRows - 1 are located at indexes k (2 * numRows
     *       - 2) + numRows - 1.
     *   > Characters in inner row i are located at indexes k (2 * numRows - 2)
     *       + i and (k + 1)(2 * numRows - 2) - i.
     **/

    if (numRows == 1)
        return s;

    string ret;
    int n = s.size();
    int cycleLen = 2 * numRows - 2;

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j + i < n; j += cycleLen)
        {
            ret += s[j + i];
            if (i != 0 && i != numRows - 1 && j + cycleLen - i < n)
                ret += s[j + cycleLen - i];
        }
    }
    return ret;
}
