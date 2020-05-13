#include "solution.h"

using std::vector;

vector<int> Solution::plusOne(vector<int> &digits)
{
    bool carry = true;
    vector<int>::reverse_iterator iter = digits.rbegin();
    for (; carry && iter != digits.rend(); iter++)
    {
        if (*iter + 1 == 10)
            *iter = 0;
        else
        {
            *iter = *iter + 1;
            carry = false;
        }
    }

    if (carry)
        digits.insert(digits.begin(), 1);

    return digits;
}
