#include "test.h"

namespace LeetcodeTest
{
  using std::vector;
  using std::string;

  LEETCODE_TEST(0068_TextJustfication_1)
  {
    vector<string> words = {
      "This", "is", "an", "example", "of", "text", "justification."
    };
    vector<string> expect = {
      "This    is    an",
      "example  of text",
      "justification.  "
    };
    EXPECT_EQ(expect, Instance().fullJustify(words, 16));
  }

  LEETCODE_TEST(0068_TextJustfication_2)
  {
    vector<string> words = {
      "What", "must", "be", "acknowledgment", "shall", "be"
    };
    vector<string> expect = {
      "What   must   be",
      "acknowledgment  ",
      "shall be        "
    };
    EXPECT_EQ(expect, Instance().fullJustify(words, 16));
  }

  LEETCODE_TEST(0068_TextJustfication_3)
  {
    vector<string> words = {
      "Science", "is", "what", "we", "understand", "well", "enough", "to",
      "explain", "to", "a", "computer.", "Art", "is", "everything", "else",
      "we", "do"
    };
    vector<string> expect = {
      "Science  is  what we",
      "understand      well",
      "enough to explain to",
      "a  computer.  Art is",
      "everything  else  we",
      "do                  "
    };
    EXPECT_EQ(expect, Instance().fullJustify(words, 20));
  }
} // namespace LeetcodeTest

