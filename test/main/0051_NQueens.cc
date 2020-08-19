#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0051_NQueues)
  {
    std::vector<std::vector<std::string>> expect = {
      {".Q..", "...Q", "Q...", "..Q."},
      {"..Q.", "Q...", "...Q", ".Q.."},
    };
    std::vector<std::vector<std::string>> output = Instance().solveNQueens(4);
    EXPECT_EQ(expect, output);
  }
}
