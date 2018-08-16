#include <iostream>
#include <string>
#include <vector>

#include "solution.h"
#include "support.h"

static const string s_quit = "q";

int main()
{
    using namespace std;
    string line;
    Solution s;
    while (getline(cin, line))
    {
        cout << line << ":" << (s.isValid(line) ? "Valid" : "Not valid") << endl;
    }
    return 0;
}