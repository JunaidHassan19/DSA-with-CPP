#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

// Starts With Problem - Given a string and a dictionary of words, determine if the string starts with any of the words in the dictionary.
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

  // Insert in Trie -TC: O(L) where L is the length of the key
  void insert(string key)
  {
    Node *temp = root;

    for (int i = 0; i < key.size(); i++)
    {
      if (temp->children.count(key[i]) == 0)
      {
        temp->children[key[i]] = new Node();
      }
      temp = temp->children[key[i]];
    }
    temp->endOfWord = true;
  }

  // startsWith in Trie -TC: O(L) where L is the length of the key
  bool startsWith(string prefix)
  {
    Node *temp = root;

    // Traverse the Trie until we find a node with frequency 1, which means that the prefix is unique
    for (int i = 0; i < prefix.size(); i++)
    {
      if (temp->children[prefix[i]])
      {
        temp = temp->children[prefix[i]];
      }
      else
      {
        return false;
      }
    }
    return true;
  }
};

int main()
{
  vector<string> words = {"apple", "app", "mango", "man", "woman"};
  Trie trie;

  for (int i = 0; i < words.size(); i++)
  {
    trie.insert(words[i]);
  }

  cout << trie.startsWith("app") << endl;  // true
  cout << trie.startsWith("mang") << endl; // true
  cout << trie.startsWith("wom") << endl;  // true
  cout << trie.startsWith("cat") << endl;  // false

  return 0;
}