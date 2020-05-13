#include "solution.h"

using std::vector;

void Solution::merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int>::reverse_iterator ir = nums1.rbegin();
    vector<int>::reverse_iterator i1 = ir + nums1.size() - m;
    vector<int>::reverse_iterator i2 = nums2.rbegin();

    while (i1 != nums1.rend() && i2 != nums2.rend())
    {
        if (*i1 > *i2)
        {
            *ir = *i1;
            i1++;
        }
        else
        {
            *ir = *i2;
            i2++;
        }
        ir++;
    }

    while (i2 != nums2.rend())
    {
        *ir = *i2;
        i2++;
        ir++;
    }
}
