#include "solution.h"
#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0208_ImplementTrie)
  {
    Solution::Trie* obj = new Solution::Trie();
    obj->insert("apple");
    EXPECT_TRUE(obj->search("apple"));
    obj->insert("app");
    EXPECT_TRUE(obj->startsWith("app"));
    obj->insert("app");
    EXPECT_TRUE(obj->search("app"));
    EXPECT_FALSE(obj->search("appl"));
    delete obj;
  }
} // namespace LeetcodeTest
