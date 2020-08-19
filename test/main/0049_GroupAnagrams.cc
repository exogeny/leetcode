#include <algorithm>
#include "test.h"

namespace LeetcodeTest
{
  using std::vector;
  using std::string;

  LEETCODE_TEST(0049_GroupAnagrams)
  {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> output = Instance().groupAnagrams(strs);

    int length = 0;
    for (vector<string> &v : output)
    {
      string cur(v[0]);
      std::sort(cur.begin(), cur.end());
      for (string s : v)
      {
        length++;
        std::sort(s.begin(), s.end());
        EXPECT_EQ(s, cur);
      }
    }
    EXPECT_EQ(strs.size(), length);
  }
}
