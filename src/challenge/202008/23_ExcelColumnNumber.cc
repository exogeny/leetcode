#include "202008.h"

int Challenge::titleToNumber(std::string s)
{
  int res = 0;
  for (char c : s)
    res = (c - 'A' + 1) + res * 26;
  return res;
}
