#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Practice Definition of a Node in the Binary Tree
/*

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

int main()
{
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node *root = buildTree(nodes);

  cout << "Root Node: " << root->data << endl;
  return 0;
}
*/

// Practice Tree Traversal of a Binary Tree

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

// Function to perform preorder traversal of the binary tree
/*
void preorder(Node *root)
{
  if (root == NULL)
  {
    return;
  }

  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}
*/

// Practice Inorder Traversal of a Binary Tree
/*
void inorder(Node *root)
{
  if (root == NULL)
  {
    return;
  }

  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}
*/

// Practice -Postorder Traversal of a Binary Tree
/*
void postorder(Node *root)
{
  if (root == nullptr)
  {
    return;
  }

  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}
*/

// Practice - Level-order Traversal of a Binary Tree

void levelOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }

  queue<Node *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {
    Node *curr = q.front();
    q.pop();

    if (curr == NULL)
    {
      cout << endl;
      if (q.empty())
      {
        break;
      }

      q.push(NULL);
    }
    else
    {
      cout << curr->data << " ";

      if (curr->left != NULL)
      {
        q.push(curr->left);
      }

      if (curr->right != NULL)
      {
        q.push(curr->right);
      }
    }
  }
}

int main()
{
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node *root = buildTree(nodes);

  // preorder(root);
  // inorder(root);
  // postorder(root);
  levelOrder(root);
  cout << endl;
  return 0;
}