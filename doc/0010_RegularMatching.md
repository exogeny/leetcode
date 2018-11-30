# Regular Expression Matching

## Recursion Version
Firstly, we can regard the patten as the combination of subpatten. so, the first idea is recursion version.
There is 3 different situations for a matching:
1. Pattern is empty, so the text should also be empty.
2. The second character of pattern is '\*', we should consider the situation as a special case. The '\*' means that the previous character can appear 0 or more times, so if the first character of the text can be equal with the first character or not. If equivalent, we can check the reset string of text with the patten, and if not, meaning that the '*' is no longer matching the string, so we should check the whole text with the reset patten.
3. The last case is that the patten is a normal character or '.'(the second character of the patten is not '*'), so we check the first character of text and check the substr of text and patten.

so the function can be wrote:
``` c++
bool isMatch(string s, string p)
{
    if (p.size() == 0)
        return s.size() == 0;

    bool firstMatch = (s.size() != 0 && (s[0] == p[0] || p[0] == '.'));

    if (p.size() >= 2 && p[1] == '*')
        return (isMatch(s, p.substr(2)) || (firstMatch && isMatch(s.substr(1), p)));

    return (firstMatch && isMatch(s.substr(1), p.substr(1)));
}
```

## Dynamic Programming
We can convert the recursion version to dynamic programming. As we talked above, if the `p[j + 1]` is '\*', the current result depend on the `s[i], p[j + 2]` and `s[i + 1], p[j]`, otherwise the current result depend on the `s[i + 1] p[j + 1]`. So we can check the mathing from end to start and we use `results[i][j]` to handle thoes calls instead, saving us expensive string-building operations and allowing us to cache the intermediate results.

so the function can be changed to:
``` c++
bool isMatch(string s, string p)
{
    bool firstMatch;
    int slen = s.size();
    int plen = p.size();
    int i, j;
    vector<vector<bool> > results(slen + 1, vector<bool>(plen + 1, false));
    results[slen][plen] = true;

    for (i = slen;i >= 0; i--)
    {
        for (j = plen - 1; j >= 0; j--)
        {
            firstMatch = (i < slen && (s[i] == p[j] || p[j] == '.'));
            if (j + 1 < plen && p[j + 1] == '*')
            {
                results[i][j] = results[i][j + 2] || (firstMatch && results[i + 1][j]);
            }
            else
            {
                results[i][j] = firstMatch && results[i + 1][j + 1];
            }
        }
    }
    return results[0][0];
}
```
