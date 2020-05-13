#include "solution.h"
#include "support.h"
#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(countAndSays)
  {
    std::string results[] = {
        "1",
        "11",
        "21",
        "1211",
        "111221",
        "312211",
        "13112221",
        "1113213211",
        "31131211131221",
        "13211311123113112211"};

    for (int i = 1; i <= 10; i++)
    {
      EXPECT_STREQ(results[i - 1].c_str(), Instance().countAndSay(i).c_str());
    }
  }
} // namespace LeetcodeTest
