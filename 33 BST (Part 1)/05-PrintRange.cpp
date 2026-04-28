#include <iostream>
#include <vector>
using namespace std;

// Delete a node in BST
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

// Print all the nodes in the given range in a BST -TC: O(h + k) where h is the height of the tree and k is the number of nodes in the range
void printInRange(Node *root, int start, int end)
{
  if (root == NULL)
  {
    return;
  }

  if (start <= root->data && end >= root->data) // Root is in the range, print it and go to both subtrees
  {
    printInRange(root->left, start, end);  // Go to left subtree
    cout << root->data << " ";             // Print root
    printInRange(root->right, start, end); // Go to right subtree
  }
  // Root is smaller than start, go to right subtree
  else if (root->data < start)
  {
    printInRange(root->right, start, end);
  }
  else // Root is greater than end, go to left subtree
  {
    printInRange(root->left, start, end);
  }
}

int main()
{
  // int arr[] = {5, 1, 3, 4, 2, 7};
  int arr[] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
  int n = sizeof(arr) / sizeof(int);

  Node *root = buildBST(arr, n);

  printInRange(root, 5, 12);
  cout << endl;
  return 0;
}