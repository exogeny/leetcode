#include "solution.h"

using std::string;

// Runtime: 4 ms, faster than 93.24%
// Memory Usage: 6.2 MB, less than 93.74%

string Solution::addBinary(string a, string b)
{
    char carry = 0;
    int la = a.size();
    int lb = b.size();
    int lr = la > lb ? la : lb;
    string r(lr, '0');
    while (la > 0 || lb > 0)
    {
        la--;
        lb--;
        lr--;
        char sum = carry;
        if (la >= 0)
            sum += a[la] - '0';
        if (lb >= 0)
            sum += b[lb] - '0';
        sum += '0';
        if (sum > '1')
        {
            r[lr] = sum - '2' + '0';
            carry = 1;
        }
        else
        {
            r[lr] = sum;
            carry = 0;
        }
    }

    if (carry == 1)
        r = "1" + r;

    return r;
}
