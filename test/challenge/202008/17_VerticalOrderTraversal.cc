#include "202008.h"
#include <gtest/gtest.h>
#include "support.h"
#include "prototype/treenode.h"

namespace ChallengeTest
{
  TEST(CHALLENGE, 202008_17_VerticalOrderTraversal)
  {
    std::vector<std::vector<int>> expected = \
      {
        {30}, {26}, {9}, {23, 7, 15, 19}, {2, 4, 34, 12},
        {1, 3, 6, 8, 31, 17}, {0, 5, 29, 13, 14, 24, 33},
        {10, 22, 11, 16, 21, 27}, {18, 32, 25, 20}, {28}
      };
    std::string tree = "[0,1,10,2,null,null,18,23,3,22,null,null,34,4,5,29,"\
        "32,null,null,7,8,6,11,31,null,null,null,9,12,null,null,null,13,14,"\
        "25,null,null,26,15,19,17,null,21,null,16,null,null,30,null,null,"\
        "null,null,null,null,33,null,null,24,20,null,null,null,null,null,"\
        "null,27,28]";
    TreeNode *root = stringToTreeNode(tree);
    std::vector<std::vector<int>> result = Challenge().verticalTraversal(root);
    EXPECT_EQ(expected, result);
  }
}