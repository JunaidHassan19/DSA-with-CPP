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

  // Destructor to free memory allocated for the linked list nodes
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

    return idx;
  }

  // Rehashing function to resize the hash table when the load factor exceeds a certain threshold
  void rehash()
  {
    Node **oldTable = table; // Store the old hash table before resizing
    int oldSize = totalSize; // Store the old size of the hash table before resizing

    totalSize = 2 * totalSize;     // Double the size of the hash table to reduce collisions
    table = new Node *[totalSize]; // Allocate memory for the new hash table

    // Initialize all entries in the new hash table to NULL
    for (int i = 0; i < totalSize; i++)
    {
      table[i] = NULL;
    }

    // Rehash all the existing key-value pairs from the old hash table to the new hash table
    for (int i = 0; i < oldSize; i++)
    {
      Node *temp = oldTable[i];
      while (temp != NULL)
      {
        insert(temp->key, temp->val);
        temp = temp->next;
      }

      // Free the memory allocated for the linked list nodes in the old hash table
      if (oldTable[i] != NULL)
      {
        delete oldTable[i];
      }
    }

    // Free the memory allocated for the old hash table
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
    Node *head = table[idx];

    newNode->next = head;
    head = newNode;

    currSize++;

    // Calculate the load factor (lambda) to determine if rehashing is needed
    double lambda = currSize / (double)totalSize;
    if (lambda > 1)
    {
      rehash();
    }
  }

  void remove(string key)
  {
  }

  int search(string key)
  {
  }
};

int main()
{
  HashTable ht;

  return 0;
}