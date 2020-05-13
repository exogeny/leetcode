#include "solution.h"

using std::string;

const static char *i2r_map[4][10] = {
    {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
    {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
    {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
    {"", "M", "MM", "MMM"}};

string Solution::intToRoman(int num)
{
  string roman;

  roman.append(i2r_map[3][num / 1000 % 10]);
  roman.append(i2r_map[2][num / 100  % 10]);
  roman.append(i2r_map[1][num / 10   % 10]);
  roman.append(i2r_map[0][num % 10]);

  return roman;
}
