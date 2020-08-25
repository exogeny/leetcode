#include "202008.h"
#include <unordered_map>

int Challenge::longestPalindrome(std::string s)
{
  std::unordered_map<char, int> map;

  for (char c : s)
    map[c] ++;

  int result = 0;
  bool left = false;
  for (auto &kv : map)
  {
    result += (kv.second / 2) * 2;
    left = left || (kv.second % 2 == 1);
  }
  if (left) result++;
  return result;
}
