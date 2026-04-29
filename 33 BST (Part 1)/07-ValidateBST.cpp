#include <iostream>
#include <vector>
using namespace std;

// Validate a BST
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

// Helper function to validate a BST
bool validateHelper(Node *root, Node *min, Node *max)
{
  if (root == NULL) // Base case: An empty tree is a valid BST
  {
    return true;
  }

  // If the current node's data is less than the minimum allowed value, it's not a valid BST
  if (min != NULL && root->data < min->data)
  {
    return false;
  }
  // If the current node's data is greater than the maximum allowed value, it's not a valid BST
  if (max != NULL && root->data > max->data)
  {
    return false;
  }

  return validateHelper(root->left, min, root) && validateHelper(root->right, root, max);
}

// Function to validate a BST
bool validate(Node *root)
{
  return validateHelper(root, NULL, NULL);
}
int main()
{
  int arr[] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
  int n = sizeof(arr) / sizeof(int);

  Node *root = buildBST(arr, n);

  cout << validate(root) << endl;
  return 0;
}