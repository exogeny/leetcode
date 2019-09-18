#include "solution.hpp"

int Solution::climbStairs(int n)
{
    if (n <= 3)
        return n;
    int steps = 0, i = 0;
    int oneStep = 1, twoStep = 2;
    for (i = 3; i <= n; ++i)
    {
        steps = oneStep + twoStep;
        oneStep = twoStep;
        twoStep = steps;
    }

    return steps;
}
