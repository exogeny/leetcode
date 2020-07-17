#include "solution.h"

// 0=invalid, 1=space, 2=sign, 3=digit, 4=dot, 5=exponent
static int TransitionTable[][6] = {
  {-1,  0,  3,  1,  2, -1}, // no input or leading space
  {-1,  8, -1,  1,  4,  5}, // input is digits
  {-1, -1, -1,  4, -1, -1}, // no digits in front just dot
  {-1, -1, -1,  1,  2, -1}, // sign +/-
  {-1,  8, -1,  4, -1,  5}, // digits and dot in front
  {-1, -1,  6,  7, -1, -1}, // input 'e' or 'E'
  {-1, -1, -1,  7, -1, -1}, // after 'e' input sign
  {-1,  8, -1,  7, -1, -1}, // after 'e' input digits
  {-1,  8, -1, -1, -1, -1}, // ending space
};

// Runtime: 0 ms, faster than 100.00%
// Memory Usage: 6.3 MB, less than 16.67%

bool Solution::isNumber(std::string s)
{
  int state = 0, input;
  for (char c : s)
  {
    input = 0;
    if (c == ' ')
      input = 1;
    else if (c == '+' || c == '-')
      input = 2;
    else if (c >= '0' && c <= '9')
      input = 3;
    else if (c == '.')
      input = 4;
    else if (c == 'e' || c == 'E')
      input = 5;

    state = TransitionTable[state][input];
    if (state == -1)
      return false;
  }
  return state == 1 || state == 4 || state == 7 || state == 8;
}
