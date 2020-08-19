#include "solution.h"
#include "support.h"
#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(findSubstring_found)
  {
    std::string s = "barfoothefoobarman";
    std::vector<std::string> words = {"foo","bar"};
    std::vector<int> res = Instance().findSubstring(s, words);
    EXPECT_EQ(2, res.size());
  }

  LEETCODE_TEST(findSubstring_fount_hard)
  {
    std::string s = "wordgoodgoodgoodbestword";
    std::vector<std::string> words = {"word","good","best","good"};
    std::vector<int> res = Instance().findSubstring(s, words);
    EXPECT_EQ(1, res.size());
  }

  LEETCODE_TEST(findSubstring_not_found)
  {
    std::string s = "wordgoodgoodgoodbestword";
    std::vector<std::string> words = {"word","good","best","word"};
    std::vector<int> res = Instance().findSubstring(s, words);
    EXPECT_EQ(0, res.size());
  }
} // namespace LeetcodeTest
