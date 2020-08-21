#include "202008.h"

static size_t getNext(size_t size)
{
  static const size_t _prime_size = 13;
  static const size_t _primes[_prime_size] =
  {
    53, 97, 193, 389, 769,
    1543,3079, 6151, 12289,
    24593, 49157, 98317, 100003
  };

  for (size_t i = 0; i < _prime_size; ++i)
  {
    if (_primes[i] > size)
      return _primes[i];
  }
  return 0;
}

void MyHashSet::_checkCapacity()
{
  MyHashSet hs(getNext(_table.size()));

  for (size_t i = 0; i < _table.size(); ++i)
  {
    HashNode *cur = _table[i];
    while (cur)
    {
      hs.add(cur->_v);
      cur = cur->_next;
    }
  }

  _table.swap(hs._table);
}

int MyHashSet::_getIndex(int key)
{
  return key % _table.size();
}

MyHashSet::MyHashSet()
  : MyHashSet(getNext(0))
{ }

MyHashSet::MyHashSet(size_t size)
  : _size(size)
{
  _table.resize(size);
}

MyHashSet::~MyHashSet()
{
  HashNode *pre;
  for (HashNode *cur : _table)
  {
    while (cur)
    {
      pre = cur;
      cur = cur->_next;
      delete pre;
    }
  }
}

void MyHashSet::add(int key)
{
  if (contains(key))
    return;

  if (_size == _table.size())
  {
    _checkCapacity();
  }

  size_t index = _getIndex(key);
  HashNode *node = new HashNode(key);
  node->_next = _table[index];
  _table[index] = node;

  ++_size;
}

void MyHashSet::remove(int key)
{
  size_t index = _getIndex(key);
  HashNode *cur = _table[index];
  HashNode *pre = NULL;
  while (cur)
  {
    if (cur->_v == key)
    {
      if (pre)
        pre->_next = cur->_next;
      else
        _table[index] = cur->_next;
      delete cur;
      return;
    }
    pre = cur;
    cur = cur->_next;
  }
}

bool MyHashSet::contains(int key)
{
  size_t index = _getIndex(key);
  HashNode *cur = _table[index];
  while (cur)
  {
    if (cur->_v == key)
      return true;
    cur = cur->_next;
  }
  return false;
}
