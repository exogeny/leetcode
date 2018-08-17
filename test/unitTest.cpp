#include "solution.h"
#include "support.h"

#include "gtest/gtest.h"

namespace {
    TEST(Solution, strStr) {
        Solution s;

        EXPECT_EQ(2, s.strStr("hello", "ll"));
        EXPECT_EQ(-1, s.strStr("aaaaa", "aab"));
    }
}

