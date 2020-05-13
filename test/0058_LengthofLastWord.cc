#include "solution.h"
#include "support.h"
#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(lengthOfLastWords)
  {
    EXPECT_EQ(5, Instance().lengthOfLastWord("Hello World"));
    EXPECT_EQ(5, Instance().lengthOfLastWord(" World"));
    EXPECT_EQ(5, Instance().lengthOfLastWord("World"));
    EXPECT_EQ(5, Instance().lengthOfLastWord("   World"));
    EXPECT_EQ(1, Instance().lengthOfLastWord(" W"));
    EXPECT_EQ(1, Instance().lengthOfLastWord("H W"));
    EXPECT_EQ(1, Instance().lengthOfLastWord("H "));
    EXPECT_EQ(0, Instance().lengthOfLastWord(" "));
    EXPECT_EQ(0, Instance().lengthOfLastWord("  "));
    EXPECT_EQ(0, Instance().lengthOfLastWord("      "));
  }
} // namespace LeetcodeTest
