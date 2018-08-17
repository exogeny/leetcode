#include "solution.h"
#include "support.h"

#include "gtest/gtest.h"

namespace {
    TEST(Solution, strStr)
    {
        Solution s;

        EXPECT_EQ(2, s.strStr("hello", "ll"));
        EXPECT_EQ(-1, s.strStr("aaaaa", "aab"));
    }

    TEST(Solution, searchInsert)
    {
        Solution s;

        int n[] = {1, 3, 5, 6};
        vector<int> nums(n, n + 4);

        EXPECT_EQ(2, s.searchInsert(nums, 5));
        EXPECT_EQ(1, s.searchInsert(nums, 2));
        EXPECT_EQ(4, s.searchInsert(nums, 7));
        EXPECT_EQ(0, s.searchInsert(nums, 0));
    }

    TEST(Solution, countAndSay)
    {
        Solution s;
        string results[]= {
            "1",
            "11",
            "21",
            "1211",
            "111221",
            "312211",
            "13112221",
            "1113213211",
            "31131211131221",
            "13211311123113112211"
        };

        for (int i = 1; i <= 10; i++)
        {
            EXPECT_EQ(results[i - 1], s.countAndSay(i));
        }
    }
}

