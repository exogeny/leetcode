#include "test.h"

namespace LeetcodeTest
{
  LEETCODE_TEST(0043_MultiplyString_1)
  {
    std::string num1("123"), num2("4");
    std::string output = Instance().multiply(num1, num2);
    EXPECT_EQ("492", output);
  }

  LEETCODE_TEST(0043_MultiplyString_2)
  {
    std::string num1("123"), num2("456");
    std::string output = Instance().multiply(num1, num2);
    EXPECT_EQ("56088", output);
  }
}
