#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

// Word Break Problem - Given a string and a dictionary of words, determine if the string can be segmented into a space-separated sequence of one or more dictionary words.
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

  // Search in Trie -TC: O(L) where L is the length of the key
  bool search(string key)
  {
    Node *temp = root;

    for (int i = 0; i < key.size(); i++)
    {
      if (temp->children.count(key[i]))
      {
        temp = temp->children[key[i]];
      }
      else
      {
        return false;
      }
    }
    return temp->endOfWord;
  }
};

// Helper function to check if the key can be segmented into words present in the Trie
bool helper(Trie &trie, string key)
{
  if (key.size() == 0)
  {
    return true;
  }
  for (int i = 0; i < key.size(); i++)
  {
    string first = key.substr(0, i + 1); // First part of the key
    string second = key.substr(i + 1);   // Second part of the key

    // If the first part is present in the Trie and the second part can be segmented, then return true
    if (trie.search(first) && helper(trie, second))
    {
      return true;
    }
  }
  return false;
}

// Word Break function - TC: O(N^2) where N is the length of the key
bool wordBreak(vector<string> dict, string key)
{
  Trie trie;
  // Insert all the words in the dictionary into the Trie
  for (int i = 0; i < dict.size(); i++)
  {
    trie.insert(dict[i]);
  }

  return helper(trie, key);
}

int main()
{
  vector<string> dict = {"i", "like", "sam", "samsung", "mobile", "ice"};
  cout << wordBreak(dict, "ilikesamsung") << endl;

  return 0;
}