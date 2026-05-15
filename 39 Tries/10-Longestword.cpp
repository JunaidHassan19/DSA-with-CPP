#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

// Longest Word with all Prefixes
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

  // longestHelper - TC: O(N) where N is the number of nodes in the Trie
  void longestHelper(Node *root, string &ans, string temp)
  {
    for (pair<char, Node *> child : root->children)
    {
      if (child.second->endOfWord)
      {
        temp += child.first;

        if ((temp.size() == ans.size() && temp < ans) || (temp.size() > ans.size()))
        {
          ans = temp;
        }

        longestHelper(child.second, ans, temp);
        temp = temp.substr(0, temp.size() - 1);
      }
    }
  }

  // longestStringWithEOW - TC: O(N) where N is the number of nodes in the Trie
  string longestStringWithEOW()
  {
    string ans = "";
    longestHelper(root, ans, "");
    return ans;
  }
};

// Function to find the longest string in the dictionary such that every prefix of the string is also present in the dictionary
string longestString(vector<string> dict)
{
  Trie trie;

  for (int i = 0; i < dict.size(); i++)
  {
    trie.insert(dict[i]);
  }

  return trie.longestStringWithEOW();
}

int main()
{
  vector<string> dict = {"a", "banana", "app", "appl", "ap", "apply"};

  cout << longestString(dict) << endl;
  return 0;
}