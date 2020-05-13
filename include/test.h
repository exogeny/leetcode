#ifndef _LEETCODE_TEST_H_
#define _LEETCODE_TEST_H_

#include "solution.h"
#include <gtest/gtest.h>

#ifdef LEETCODE_TEST
#undef LEETCODE_TEST
#endif

#define LEETCODE_TEST(test_name) TEST(LEETCODE, test_name)

namespace LeetcodeTest
{
  static Solution &Instance()
  {
    static Solution instance;
    return instance;
  }
}

#endif
