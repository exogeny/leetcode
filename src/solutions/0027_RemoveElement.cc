#include "solution.h"

using std::vector;

int Solution::removeElement(vector<int> &nums, int val)
{
    if (nums.empty())
        return 0;

    int length = 0;
    vector<int>::iterator curr = nums.begin();

    while (curr != nums.end())
    {
        if (*curr != val)
            nums[length++] = *curr;
        curr++;
    }

    return length;
}
