#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0052_NQueues_1)
  {
    int expect = 2;
    EXPECT_EQ(expect, Instance().totalNQueens(4));
  }

  LEETCODE_TEST(0052_NQueues_2)
  {
    int expect = 0;
    EXPECT_EQ(expect, Instance().totalNQueens(3));
  }
}
