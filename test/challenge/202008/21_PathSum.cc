#include "202008.h"
#include "support.h"
#include <gtest/gtest.h>

namespace ChallengeTest
{
  TEST(CHALLENGE, 202008_21_PathSum)
  {
    TreeNode *root = stringToTreeNode("[10,5,-3,3,2,null,11,3,-2,null,1]");
    EXPECT_EQ(3, Challenge().pathSum(root, 8));
  }
}
