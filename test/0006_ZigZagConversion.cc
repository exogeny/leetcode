#include <iostream>
#include <vector>

#include "solution.hpp"
#include "support.hpp"

#include <gtest/gtest.h>

using std::vector;
using std::string;

namespace
{
    TEST(Solution, ZigZagConversion_1)
    {
        Solution s;

        string val = "PAYPALISHIRING";
        string exp = "PAHNAPLSIIGYIR";

        string res = s.convert(val, 3);
        EXPECT_STREQ(res.c_str(), exp.c_str());
    }

    TEST(Solution, ZigZagConversion_2)
    {
        Solution s;

        string val = "PAYPALISHIRING";
        string exp = "PINALSIGYAHRPI";

        string res = s.convert(val, 4);
        EXPECT_STREQ(res.c_str(), exp.c_str());
    }
}