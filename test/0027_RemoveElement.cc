#include <iostream>
#include <vector>

#include "solution.hpp"
#include "support.hpp"

#include <gtest/gtest.h>

using std::vector;

namespace
{

TEST(Solution, RemoveElement_1)
{
  Solution s;

  vector<int> expected = {2, 2};
  vector<int> input = stringToIntegerVector("[3,2,2,3]");
  int length = s.removeElement(input, 3);

  EXPECT_EQ(length, 2);
  for (int i = 0; i < length; i++)
  {
    EXPECT_EQ(input[i], expected[i]);
  }
}

TEST(Solution, RemoveElement_2)
{
  Solution s;

  vector<int> expected = {0, 1, 3, 0, 4};
  vector<int> input = stringToIntegerVector("[0,1,2,2,3,0,4,2]");
  int length = s.removeElement(input, 2);

  EXPECT_EQ(length, expected.size());
  for (int i = 0; i < length; i++)
  {
    EXPECT_EQ(input[i], expected[i]);
  }
}
}
