#include <iostream>
#include <vector>
using namespace std;

// Definition of a Node in the Binary Tree
class Node
{
public:
  int data;
  Node *left;  // Pointer to the left child
  Node *right; // Pointer to the right child

  Node(int data)
  {
    this->data = data;
    left = right = NULL;
  }
};

// Function to build a binary tree from a vector of integers
static int idx = -1; // Static variable to keep track of the current index in the vector
Node *buildTree(vector<int> nodes)
{
  idx++;
  if (nodes[idx] == -1)
  {
    return NULL;
  }
  Node *currNode = new Node(nodes[idx]); // Create a new node with the current value
  currNode->left = buildTree(nodes);     // Recursively build the left subtree
  currNode->right = buildTree(nodes);    // Recursively build the right subtree

  return currNode;
}

int main()
{
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node *root = buildTree(nodes);

  cout << "Root Node: " << root->data << endl;

  return 0;
}