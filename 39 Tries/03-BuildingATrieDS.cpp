#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

// Building a Trie Data Structure
class Node
{
public:
  unordered_map<char, Node *> children;
  bool endOfWord;

  Node() // Constructor to initialize a Trie node
  {
    endOfWord = false; // Initialize endOfWord to false
  }
};

// Trie class
class Trie
{
  Node *root; // Root node of the Trie

public:
  Trie() // Constructor to initialize the Trie
  {
    root = new Node(); // Initialize the root node
  }
};

int main()
{
  vector<string> words = {"the", "a", "there", "their", "any", "thee"};
  Trie trie;

  return 0;
}