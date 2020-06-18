#include <unordered_set>
#include <unordered_map>
#include "solution.h"

using namespace std;

vector<int> Solution::findSubstring(string s, vector<string>& words)
{
  vector<int> res;
  if (s.size() == 0 || words.size() == 0)
    return res;

  int words_size = words.size();
  int word_length = words[0].size();

  if (words_size * word_length > s.size())
    return res;

  unordered_map<string, int> words_num;
  for (string &word : words)
  {
    words_num[word]++;
  }

  unordered_map<string, int> words_founds;
  for (int i = 0; i <= s.length() - words_size * word_length; i++)
  {
    words_founds.clear();
    for (int j = 0; j < words_size; j++)
    {
      int next_index = i + j * word_length;
      string word = s.substr(next_index, word_length);
      if (!words_num.count(word))
      {
        break;
      }
      words_founds[word]++;
      if (words_founds[word] > words_num[word])
      {
        break;
      }

      if (j + 1 == words_size)
      {
        res.push_back(i);
      }
    }
  }

  return res;
}
