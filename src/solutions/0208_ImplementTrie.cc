#include "solution.h"
#include <queue>

Solution::Trie::Trie() { root = new TrieNode(); }

Solution::Trie::~Trie()
{
  TrieNode *tmp;
  std::queue<TrieNode *> q;
  q.push(root);

  while (q.size()) {
    tmp = q.front();
    q.pop();
    for (int i = 0; i < 26; i++) {
      if (tmp->children[i])
        q.push(tmp->children[i]);
    }
    delete tmp;
  }
}

void Solution::Trie::insert(std::string word)
{
  TrieNode *node = root;
  for (char c : word)
  {
    if (!node->children[c - 'a'])
      node->children[c - 'a'] = new TrieNode();
    node = node->children[c - 'a'];
  }
  node->endding = true;
}

bool Solution::Trie::search(std::string word)
{
  TrieNode *node = root;
  for (char c : word)
  {
    if (!node->children[c - 'a'])
      return false;
    node = node->children[c - 'a'];
  }
  return node->endding;
}

bool Solution::Trie::startsWith(std::string prefix)
{
  TrieNode *node = root;
  for (char c : prefix)
  {
    if (!node->children[c - 'a'])
      return false;
    node = node->children[c - 'a'];
  }
  return true;
}
