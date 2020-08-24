#include "202008.h"

static int _pathSum(TreeNode *node, int sum, int cur)
{
  if (!node) return 0;
  cur = cur + node->val;
  return (cur == sum) + \
         _pathSum(node->left, sum, cur) + \
         _pathSum(node->right, sum, cur);
}

int Challenge::pathSum(TreeNode *root, int sum)
{
  if (!root) return 0;
  return _pathSum(root, sum, 0) + \
         pathSum(root->left, sum) + \
         pathSum(root->right, sum);
}
