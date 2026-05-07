#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Node class to represent each entry in the hash table
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
};

// HashTable class to manage the hash table operations
class HashTable
{
  int totalSize; // Total size of the hash table
  int currSize;  // Current number of elements in the hash table
  Node **table;  // Pointer to an array of pointers to Node, representing the hash table

public:
  // Constructor to initialize the hash table with a given size
  HashTable(int size = 5)
  {
    totalSize = size;
    currSize = 0;

    table = new Node *[totalSize]; // Allocate memory for the hash table

    // Initialize all entries in the hash table to NULL
    for (int i = 0; i < totalSize; i++)
    {
      table[i] = NULL;
    }
  }

  void insert(string key, int val)
  {
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