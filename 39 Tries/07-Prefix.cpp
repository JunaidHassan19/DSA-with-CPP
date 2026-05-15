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

  // Search in Trie -TC: O(L) where L is the length of the key
  string getPrefix(string key)
  {
    Node *temp = root;
    string prefix = "";

    // Traverse the Trie until we find a node with frequency 1, which means that the prefix is unique
    for (int i = 0; i < key.size(); i++)
    {
      prefix += key[i];
      if (temp->children[key[i]]->freq == 1)
      {
        break;
      }
      temp = temp->children[key[i]];
    }
    return prefix;
  }
};

// Function to find the shortest unique prefix for each word in the dictionary
void prefixProblem(vector<string> dict) // tc: O(N*L) where N is the number of words in the dictionary and L is the average length of the words
{
  Trie trie;
  // Insert all the words in the dictionary into the Trie
  for (int i = 0; i < dict.size(); i++)
  {
    trie.insert(dict[i]);
  }

  // Get the shortest unique prefix for each word in the dictionary
  for (int i = 0; i < dict.size(); i++)
  {
    cout << trie.getPrefix(dict[i]) << endl;
  }
}

int main()
{
  vector<string> dict = {"zebra", "dog", "duck", "dove"};

  prefixProblem(dict);

  return 0;
}