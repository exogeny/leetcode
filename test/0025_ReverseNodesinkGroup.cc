#include <iostream>
#include <vector>

#include "solution.hpp"
#include "support.hpp"

#include <gtest/gtest.h>

using std::vector;
using std::string;

namespace
{
using std::string;

TEST(Solution, ReverseKGroup_1)
{
  Solution s;

  string expected("[2, 1, 4, 3, 5]");
  ListNode *input = stringToListNode("[1, 2, 3, 4, 5]");
  ListNode *result = s.reverseKGroup(input, 2);

  EXPECT_STREQ(listNodeToString(result).c_str(), expected.c_str());
}

TEST(Solution, ReverseKGroup_2)
{
  Solution s;

  string expected("[3, 2, 1, 4, 5]");
  ListNode *input = stringToListNode("[1, 2, 3, 4, 5]");
  ListNode *result = s.reverseKGroup(input, 3);

  EXPECT_STREQ(listNodeToString(result).c_str(), expected.c_str());
}
}