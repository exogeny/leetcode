#include "202008.h"
#include <gtest/gtest.h>

namespace ChallengeTest
{
  TEST(CHALLENGE, 202008_23_ExcelColumnNumber)
  {
    Challenge c;
    EXPECT_EQ(1, c.titleToNumber("A"));
    EXPECT_EQ(27, c.titleToNumber("AA"));
    EXPECT_EQ(28, c.titleToNumber("AB"));
    EXPECT_EQ(701, c.titleToNumber("ZY"));
  }
}
