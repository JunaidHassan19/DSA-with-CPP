#include <iostream>
#include <vector>
using namespace std;

// Practice - Insert a node in BST and build a BST from an array of values
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

Node *insert(Node *root, int val)
{
  if (root == NULL)
  {
    root = new Node(val);
    return root;
  }

  if (val < root->data)
  {
    root->left = insert(root->left, val);
  }
  else
  {
    root->right = insert(root->right, val);
  }

  return root;
}

Node *buildBST(int arr[], int n)
{
  Node *root = NULL;

  for (int i = 0; i < n; i++)
  {
    root = insert(root, arr[i]);
  }
  return root;
}

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

// Practice - Search a key in BST
bool search(Node *root, int key)
{
  if (root == NULL)
  {
    return false;
  }

  if (root->data == key)
  {
    return true;
  }
  else if (root->data > key)
  {
    return search(root->left, key);
  }
  else
  {
    return search(root->right, key);
  }
}

int main()
{
  int arr[] = {5, 1, 3, 4, 2, 7};
  int n = sizeof(arr) / sizeof(int);

  Node *root = buildBST(arr, n);
  // inorder(root);

  int key = 4;
  cout << search(root, key);
  cout << endl;
  return 0;
}