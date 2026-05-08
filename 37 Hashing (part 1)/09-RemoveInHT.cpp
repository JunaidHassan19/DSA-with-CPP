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

  void rehash() // TC: O(n)
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

  void insert(string key, int val) // TC: O(1) on average, O(n) in worst case when rehashing is needed
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

  bool exists(string key) // TC: O(1) on average, O(n) in worst case when all keys hash to the same bucket
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

  int search(string key) // TC: O(1) on average, O(n) in worst case when all keys hash to the same bucket
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

  // Remove a key from the hash table if it exists, otherwise do nothing. TC: O(1) on average, O(n) in worst case when all keys hash to the same bucket
  void remove(string key)
  {
    int idx = HashFunction(key);

    Node *temp = table[idx];
    Node *prev = temp;
    while (temp != NULL)
    {
      if (temp->key == key)
      {
        if (prev == temp)
        {
          table[idx] = temp->next;
        }
        else
        {
          prev->next = temp->next;
        }
        break;
      }

      prev = temp;
      temp = temp->next;
    }
  }

  void print()
  {
    for (int i = 0; i < totalSize; i++)
    {
      cout << "Bucket " << i << ": ";
      Node *temp = table[i];
      while (temp != NULL)
      {
        cout << temp->key << " -> " << temp->val;
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
  cout << "_____________________" << endl;

  ht.remove("orange");
  ht.print();
  cout << "_____________________" << endl;

  ht.remove("apple");
  ht.print();
  cout << "_____________________" << endl;

  ht.remove("berry");
  ht.print();

  return 0;
}