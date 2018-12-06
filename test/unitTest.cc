#include <iostream>
#include <string>

#include "solution.hpp"
#include "support.hpp"

#include <gtest/gtest.h>

namespace {
    using std::string;
    using std::vector;

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

    TEST(Solution, maxSubArray)
    {
        Solution s;

        int n[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
        vector<int> nums(n, n + 9);

        EXPECT_EQ(6, s.maxSubArray(nums));

        nums.erase(nums.begin(), nums.end());
        nums.push_back(-2);
        nums.push_back(-1);
        EXPECT_EQ(-1, s.maxSubArray(nums));
    }

    TEST(Solution, lengthOfLastWord)
    {
        Solution s;

        EXPECT_EQ(5, s.lengthOfLastWord("Hello World"));
        EXPECT_EQ(5, s.lengthOfLastWord(" World"));
        EXPECT_EQ(5, s.lengthOfLastWord("World"));
        EXPECT_EQ(5, s.lengthOfLastWord("   World"));
        EXPECT_EQ(1, s.lengthOfLastWord(" W"));
        EXPECT_EQ(1, s.lengthOfLastWord("H W"));
        EXPECT_EQ(1, s.lengthOfLastWord("H "));
        EXPECT_EQ(0, s.lengthOfLastWord(" "));
        EXPECT_EQ(0, s.lengthOfLastWord("  "));
        EXPECT_EQ(0, s.lengthOfLastWord("      "));
    }

    TEST(Solution, addBinary)
    {
        Solution s;

        EXPECT_EQ("100", s.addBinary("11", "1"));
    }

    TEST(Solution, climbStairs)
    {
        Solution s;

        EXPECT_EQ(3, s.climbStairs(3));
        EXPECT_EQ(10946, s.climbStairs(20));
    }

    TEST(Solution, deleteDuplicates)
    {
        Solution s;

        EXPECT_EQ("[1]", listNodeToString(s.deleteDuplicates(stringToListNode("[1,1,1]"))));
        EXPECT_EQ("[1, 2]", listNodeToString(s.deleteDuplicates(stringToListNode("[1,1,2]"))));
        EXPECT_EQ("[1, 2, 3]", listNodeToString(s.deleteDuplicates(stringToListNode("[1,1,2,3,3]"))));
    }

    TEST(Solution, regularExpressionMatching)
    {
        Solution s;

        EXPECT_EQ(false, s.isMatch("aa",          "a"));
        EXPECT_EQ(true,  s.isMatch("aa",          "a*"));
        EXPECT_EQ(true,  s.isMatch("ab",          ".*"));
        EXPECT_EQ(true,  s.isMatch("aab",         "c*a*b"));
        EXPECT_EQ(false, s.isMatch("mississippi", "mis*is*p*."));
    }
}

