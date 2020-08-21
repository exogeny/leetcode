#include "202008.h"

bool Challenge::detectCapitalUse(std::string word)
{
  std::string::size_type sz = word.size();
  if (sz == 1) return true;

  bool capital = (word[0] >= 'A' && word[0] <= 'Z');
  for (int i = 1; i < sz; i++)
  {
    if (capital)
    {
      if (i > 1 && (word[i] >= 'a' && word[i] <= 'z'))
        return false;
      else if (word[i] >= 'a' && word[i] <= 'z')
        capital = false;
    }

    if (!capital && word[i] >= 'A' && word[i] <= 'Z')
      return false;
  }
  return true;
}
