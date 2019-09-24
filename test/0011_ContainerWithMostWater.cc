#include <vector>

#include "solution.hpp"
#include "support.hpp"

#include <gtest/gtest.h>

namespace
{
using std::vector;

TEST(Solution, maxArea)
{
  Solution s;

  vector<int> input({1, 8, 6, 2, 5, 4, 8, 3, 7});
  int result = s.maxArea(input);

  EXPECT_EQ(49, result);
}
}
