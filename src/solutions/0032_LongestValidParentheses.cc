#include "solution.h"
#include <stack>

using namespace std;

int Solution::longestValidParentheses(string s)
{
  if (s.size() == 0 || s.size() == 1)
    return 0;

  int longest_length = 0;
  stack<int> parentheses;
  parentheses.push(-1);
  for (unsigned int i = 0; i < s.length(); i++)
  {
    if (s[i] == '(')
    {
      parentheses.push(i);
    }
    else
    {
      parentheses.pop();
      if (parentheses.empty())
      {
        parentheses.push(i);
      }
      else
      {
        longest_length = MAX(longest_length, (i - parentheses.top()));
      }
    }
  }
  return longest_length;
}
