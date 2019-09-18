#include "solution.hpp"

using std::vector;

int Solution::removeDuplicates(vector<int> &nums)
{
    if (nums.empty())
        return 0;

    int length = 0;
    vector<int>::iterator curr = nums.begin();
    vector<int>::iterator next = curr + 1;

    while (next != nums.end())
    {
        if (*next != *curr)
        {
            nums[length] = *curr;
            length++;
            curr = next;
        }
        next++;
    }
    nums[length++] = *curr;

    return length;
}
