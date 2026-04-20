#include <iostream>
#include <vector>
using namespace std;

// Inorder Traversal of a Binary Tree
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

void inorder(Node *root)
{

  if (root == NULL)
  {
    return;
  }

  inorder(root->left);       // Traverse the left subtree first
  cout << root->data << " "; // Visit the root node
  inorder(root->right);      // Traverse the right subtree last
}

int main()
{
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node *root = buildTree(nodes);

  inorder(root);
  cout << endl;
  return 0;
}