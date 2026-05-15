#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

// Count Unique Substrings
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

  // countHelper - TC: O(N) where N is the number of nodes in the Trie
  int countHelper(Node *root)
  {
    int ans = 0;

    // Traverse the Trie and count the number of nodes in the Trie
    for (pair<char, Node *> child : root->children)
    {
      ans += countHelper(child.second);
    }

    return ans + 1;
  }

  // countNodes - TC: O(N) where N is the number of nodes in the Trie
  int countNodes()
  {
    return countHelper(root); // We add 1 to the count to account for the root node, which represents the empty string and is not counted as a unique substring.
  }
};

// Function to count unique substrings in a given string
int countUnique(string str)
{
  Trie trie;
  // Insert all suffixes of the string into the Trie
  for (int i = 0; i < str.size(); i++)
  {
    string suffix = str.substr(i);
    trie.insert(suffix);
  }
  // Count the number of nodes in the Trie, which gives us the count of unique substrings
  return trie.countNodes();
}

int main()
{
  string str = "ababa";

  cout << "Count of unique substrings: " << countUnique(str) << endl;
  return 0;
}