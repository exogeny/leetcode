#include <iostream>
#include <vector>

#include "solution.hpp"
#include "support.hpp"

#include <gtest/gtest.h>

namespace
{
    TEST(Solution, twoSum)
    {
        size_t i;
        int target = 9;
        Solution s;
        std::vector<int> nums = { 2, 7, 11, 19 };

        std::vector<int> expected = { 0, 1 };
        std::vector<int> actual   = s.twoSum(nums, target);
        
        EXPECT_EQ(expected.size(), actual.size());
        for (i = 0; i < expected.size() && i < actual.size(); i++)
        {
            EXPECT_EQ(expected[i], actual[i]);
        }
    }
}
