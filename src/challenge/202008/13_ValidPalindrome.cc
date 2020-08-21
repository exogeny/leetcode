#include "202008.h"

static char lower(char ch)
{
  static int minus = 'A' - 'a';
  if (ch >= 'a' && ch <= 'z')
    return ch;
  if (ch >= 'A' && ch <= 'Z')
    return ch - minus;
  if (ch >= '0' && ch <= '9')
    return ch;
  return 0;
}

bool Challenge::isPalindrome(std::string s)
{
  std::string::const_iterator begin = s.begin();
  std::string::const_iterator end = s.end() - 1;

  char l, r;
  while (begin <= end)
  {
    l = lower(*begin);
    r = lower(*end);
    if (l && r)
    {
      if (l != r)
        return false;
      begin++;
      end--;
      continue;
    }

    if (!l) begin++;
    if (!r) end--;
  }
  return true;
}
