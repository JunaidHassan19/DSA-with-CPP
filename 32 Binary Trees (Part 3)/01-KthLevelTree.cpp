#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

// Kth level of a binary tree
class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int data)
  {
    this->data = data;
    left = right = NULL;
  }
};

static int idx = -1;
Node *buildTree(vector<int> nodes)
{
  idx++;
  if (nodes[idx] == -1)
  {
    return NULL;
  }
  Node *currNode = new Node(nodes[idx]);
  currNode->left = buildTree(nodes);
  currNode->right = buildTree(nodes);

  return currNode;
}

// Helper function to print nodes at Kth level
void KthHelper(Node *root, int K, int currLevel)
{
  if (root == NULL)
  {
    return;
  }

  if (currLevel == K) // If current level matches K, print the node's data
  {
    cout << root->data << " ";
    return;
  }

  KthHelper(root->left, K, currLevel + 1);  // Go to left subtree
  KthHelper(root->right, K, currLevel + 1); // Go to right subtree
}

// Function to print nodes at Kth level of the binary tree
void KthLevel(Node *root, int K)
{
  KthHelper(root, K, 1); // Start from level 1 (root level)
  return;
}

int main()
{
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node *root = buildTree(nodes);
  int K = 3;
  KthLevel(root, K);
  cout << endl;
  return 0;
}