#include "solution.h"
#include "support.h"
#include "test.h"

using std::string;
using std::vector;

namespace LeetcodeTest
{
  bool find(string &expected, vector<string> &results)
  {
    vector<string>::const_iterator it = results.begin();
    for (; it < results.end(); it++)
    {
      if (strcmp(expected.c_str(), it->c_str()) == 0)
      {
        return true;
      }
    }
    return false;
  }

  LEETCODE_TEST(generateParenthesis)
  {
    int i;
    string *expects = new string[5];

    expects[0] = "((()))";
    expects[1] = "(()())";
    expects[2] = "(())()";
    expects[3] = "()(())";
    expects[4] = "()()()";

    vector<string> results = Instance().generateParenthesis(3);

    EXPECT_EQ(results.size(), 5);

    for (i = 0; i < 5; i++)
    {
      EXPECT_TRUE(find(expects[i], results));
    }
  }
} // namespace LeetcodeTest
