#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Node
{
public:
  string key;
  int val;
  Node *next;

  Node(string key, int val)
  {
    this->key = key;
    this->val = val;
    next = NULL;
  }

  ~Node()
  {
    if (next != NULL)
    {
      delete next;
    }
  }
};

class HashTable
{
  int totalSize;
  int currSize;
  Node **table;

  int HashFunction(string key)
  {
    int idx = 0;

    for (int i = 0; i < key.size(); i++)
    {
      idx = idx + (key[i] * key[i]) % totalSize;
    }

    return idx % totalSize;
  }

  void rehash()
  {
    Node **oldTable = table;
    int oldSize = totalSize;

    totalSize = 2 * totalSize;
    currSize = 0;
    table = new Node *[totalSize];

    for (int i = 0; i < totalSize; i++)
    {
      table[i] = NULL;
    }

    for (int i = 0; i < oldSize; i++)
    {
      Node *temp = oldTable[i];
      while (temp != NULL)
      {
        insert(temp->key, temp->val);
        temp = temp->next;
      }

      if (oldTable[i] != NULL)
      {
        delete oldTable[i];
      }
    }

    delete[] oldTable;
  }

public:
  HashTable(int size = 5)
  {
    totalSize = size;
    currSize = 0;

    table = new Node *[totalSize];

    for (int i = 0; i < totalSize; i++)
    {
      table[i] = NULL;
    }
  }

  void insert(string key, int val)
  {
    int idx = HashFunction(key);

    Node *newNode = new Node(key, val);

    newNode->next = table[idx];
    table[idx] = newNode;

    currSize++;

    double lambda = currSize / (double)totalSize;
    if (lambda > 1)
    {
      rehash();
    }
  }

  // Check if a key exists in the hash table and return true if it does, otherwise return false
  bool exists(string key)
  {
    int idx = HashFunction(key);
    Node *temp = table[idx];

    while (temp != NULL)
    {
      if (temp->key == key)
      {
        return true;
      }
      temp = temp->next;
    }

    return false;
  }

  // Search for a key in the hash table and return its associated value, or -1 if the key is not found
  int search(string key)
  {
    int idx = HashFunction(key);
    Node *temp = table[idx];

    while (temp != NULL)
    {
      if (temp->key == key)
      {
        return temp->val;
      }
      temp = temp->next;
    }

    return -1;
  }

  void remove(string key)
  {
  }

  // Print the contents of the hash table for debugging purposes, showing each bucket and the key-value pairs stored in it
  void print()
  {
    for (int i = 0; i < totalSize; i++)
    {
      cout << "Bucket " << i << ": ";
      Node *temp = table[i];
      while (temp != NULL)
      {
        cout << temp->key << " -> " << temp->val << endl;
        temp = temp->next;
      }
      cout << endl;
    }
  }
};

int main()
{
  HashTable ht;

  ht.insert("apple", 10);
  ht.insert("banana", 10);
  ht.insert("orange", 30);
  ht.insert("grape", 50);
  ht.insert("berry", 60);

  ht.print();

  return 0;
}