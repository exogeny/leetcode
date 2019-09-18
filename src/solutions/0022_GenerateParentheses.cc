#include "solution.hpp"

using std::string;
using std::vector;

void generateAll(int n, int umatch, string current, vector<string>& result)
{
    if (n == 0 && umatch == 0)
    {
        result.push_back(current);
    }
    else
    {
        if (current.empty())
        {
            generateAll(n-1, umatch+1, current+'(', result);
        }
        else
        {
            if (n > 0)
            {
                generateAll(n-1, umatch+1, current + '(', result);
            }

            if (umatch > 0)
            {
                generateAll(n, umatch-1, current+')', result);
            }
        }
    }
}

vector<string> Solution::generateParenthesis(int n)
{
    vector<string> result;
    generateAll(n, 0, "", result);
    return result;
}
