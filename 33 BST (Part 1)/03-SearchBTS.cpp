#include <iostream>
#include <vector>
using namespace std;

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

// Search a key in BST-TC: O(h) where h is the height of the tree
bool search(Node *root, int key)
{
  if (root == NULL)
  {
    cout << "Key not found ";
    return false;
  }

  if (root->data == key)
  {
    cout << "Key Found ";
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
  // int arr[] = {5, 1, 3, 4, 2, 7};
  int arr[] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
  int n = sizeof(arr) / sizeof(int);
  int key = 14;
  Node *root = buildBST(arr, n);
  inorder(root);
  cout << endl;

  cout << search(root, key);
  return 0;
}