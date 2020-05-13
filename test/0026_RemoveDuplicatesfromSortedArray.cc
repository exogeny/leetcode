#include <iostream>
#include <vector>

#include "solution.hpp"
#include "support.hpp"

#include <gtest/gtest.h>

using std::vector;

namespace
{

TEST(Solution, RemoveDuplicatesfromSortedArray_1)
{
  Solution s;

  vector<int> expected = {1, 2};
  vector<int> input = stringToIntegerVector("[1,1,2]");
  int length = s.removeDuplicates(input);

  EXPECT_EQ(length, expected.size());
  for (int i = 0; i < length; i++)
  {
    EXPECT_EQ(expected[i], input[i]);
  }
}

TEST(Solution, RemoveDuplicatesfromSortedArray_2)
{
  Solution s;

  vector<int> expected = {0, 1, 2, 3, 4};
  vector<int> input = stringToIntegerVector("[0,0,1,1,1,2,2,3,3,4]");
  int length = s.removeDuplicates(input);

  EXPECT_EQ(length, expected.size());
  for (int i = 0; i < length; i++)
  {
    EXPECT_EQ(expected[i], input[i]);
  }
}
}
