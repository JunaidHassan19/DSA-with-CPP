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
};

class HashTable
{
  int totalSize;
  int currSize;
  Node **table;

  // Hash function to compute the index for a given key
  int HashFunction(string key)
  {
    int idx = 0;

    // Compute the hash index by iterating through each character of the key and applying a simple hash function
    for (int i = 0; i < key.size(); i++)
    {
      idx = idx + (key[i] * key[i]) % totalSize; // Update the index by adding the square of the ASCII value of the character, modulo the total size of the hash table
    }

    return idx;
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

  // Insert a key-value pair into the hash table
  void insert(string key, int val)
  {
    int idx = HashFunction(key); // Compute the index for the given key using the hash function

    Node *newNode = new Node(key, val); // Create a new node with the key and value to be inserted
    Node *head = table[idx];            // Get the head of the linked list at the computed index

    newNode->next = head;
    head = newNode;

    currSize++;
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