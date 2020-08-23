#include "202008.h"
#include <queue>

Challenge::WordDictionary::WordDictionary()
{
  root = new WordNode();
}

Challenge::WordDictionary::~WordDictionary() {
  WordNode *node;
  std::queue<WordNode *> q{{root}};
  while (q.size())
  {
    node = q.front();
    q.pop();
    for (int i = 0; i < 26; i++)
    {
      if (node->children[i])
        q.push(node->children[i]);
    }
    delete node;
  }
}

void Challenge::WordDictionary::addWord(std::string word)
{
  WordNode *node = root;
  for (char &c : word)
  {
    if (!node->children[c - 'a'])
      node->children[c - 'a'] = new WordNode();
    node = node->children[c - 'a'];
  }
  node->endding = true;
}

bool Challenge::WordDictionary::searchNode(
    const std::string &word,
    size_t index, WordNode *node)
{
  if (index == word.size())
    return node->endding;

  if (word[index] == '.')
  {
    for (auto &n : node->children)
    {
      if (n && searchNode(word, index + 1, n))
        return true;
    }
    return false;
  }
  else
  {
    node = node->children[word[index] - 'a'];
    return node && searchNode(word, index + 1, node);
  }
}

bool Challenge::WordDictionary::search(std::string word)
{
  return searchNode(word, 0, root);
}
