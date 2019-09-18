#include "solution.hpp"

using std::vector;

int Solution::searchInsert(vector<int> &nums, int target)
{
    if (nums.empty())
        return 0;

    int index = 0;
    vector<int>::iterator curr = nums.begin();
    while (*curr < target && curr != nums.end())
        curr++;

    return (curr - nums.begin());
}
