#include <iostream>
#include <vector>

#include "solution.hpp"
#include "support.hpp"

#include <gtest/gtest.h>

using std::vector;
using std::string;

namespace
{
    bool find(string& expected, vector<string>& results)
    {
        vector<string>::const_iterator it = results.begin();
        for (; it < results.end(); it++)
        {
            if (strcmp(expected.c_str(), it->c_str()) == 0)
            {
                return true;
            }
        }
        return false;
    }

    TEST(Solution, generateParenthesis)
    {
        int i;
        Solution s;
        string* expects = new string[5];

        expects[0] = "((()))";
        expects[1] = "(()())";
        expects[2] = "(())()";
        expects[3] = "()(())";
        expects[4] = "()()()";

        vector<string> results = s.generateParenthesis(3);

        EXPECT_EQ(results.size(), 5);

        for (i = 0; i < 5; i++)
        {
            EXPECT_TRUE(find(expects[i], results));
        }
    }
}