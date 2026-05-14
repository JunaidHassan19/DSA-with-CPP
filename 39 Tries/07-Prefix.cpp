#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

// Prefix Problem
class Node
{
public:
  unordered_map<char, Node *> children;
  bool endOfWord;
  int freq;

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
    root->freq = -1;
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
        temp->children[key[i]]->freq = 1;
      }
      else
      {
        temp->children[key[i]]->freq++;
      }
      temp = temp->children[key[i]];
    }
    temp->endOfWord = true;
  }
};

int main()
{
  vector<string> dict = {"zebra", "dog", "duck", "dove"};

  return 0;
}