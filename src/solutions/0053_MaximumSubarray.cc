#include "solution.hpp"

using std::vector;

int maxSubArraywithIndex(vector<int> &nums, int left, int right)
{
    if (left == right)
        return nums[left];

    int i, sum;
    int mid = (left + right) / 2;
    int maxPadLeft = nums[mid], maxPadRight = nums[mid + 1];
    int maxLeft = maxSubArraywithIndex(nums, left, mid);
    int maxRight = maxSubArraywithIndex(nums, mid + 1, right);
    for (i = mid, sum = 0; i >= left; i--)
    {
        sum += nums[i];
        if (sum > maxPadLeft)
            maxPadLeft = sum;
    }

    for (i = mid + 1, sum = 0; i <= right; i++)
    {
        sum += nums[i];
        if (sum > maxPadRight)
            maxPadRight = sum;
    }

    return MAX(MAX(maxLeft, maxRight), (maxPadLeft + maxPadRight));
}

int Solution::maxSubArray(vector<int> &nums)
{
    if (nums.empty())
        return 0;
    if (nums.size() == 1)
        return nums[0];

    return maxSubArraywithIndex(nums, 0, nums.size() - 1);
}
