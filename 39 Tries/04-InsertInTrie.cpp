#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Node
{
public:
  unordered_map<char, Node *> children;
  bool endOfWord;

  Node()
  {
    endOfWord = false;
  }
};

class Trie
{
  Node *root;

public:
  Trie()
  {
    root = new Node();
  }

  // Function to insert a key into the Trie
  void insert(string key)
  {
    Node *temp; // Temporary pointer to traverse the Trie

    for (int i = 0; i < key.size(); i++)
    {
      // If the current character is not present in the children of the current node, create a new node
      if (temp->children.count(key[i]) == 0)
      {
        temp->children[key[i]] = new Node();
      }
      // Move the temporary pointer to the child node corresponding to the current character
      temp = temp->children[key[i]];
    }
    temp->endOfWord = true; // Mark the end of the word in the Trie
  }
};

int main()
{
  vector<string> words = {"the", "a", "there", "their", "any", "thee"};
  Trie trie;

  for (int i = 0; i < words.size(); i++)
  {
    trie.insert(words[i]);
  }

  return 0;
}