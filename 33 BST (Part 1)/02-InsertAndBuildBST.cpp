#include <iostream>
#include <vector>
using namespace std;

// Insert a node in BST and build a BST from an array of values
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

// Insert a node in BST-TC: O(h) where h is the height of the tree
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

// Build a BST from an array of values-TC: O(n*h) where n is the number of elements in the array and h is the height of the tree
Node *buildBST(int arr[], int n)
{
  Node *root = NULL;

  for (int i = 0; i < n; i++)
  {
    root = insert(root, arr[i]);
  }
  return root;
}

// Inorder traversal of BST-TC: O(n) where n is the number of nodes in the tree
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

int main()
{
  int arr[] = {5, 1, 3, 4, 2, 7};
  int n = sizeof(arr) / sizeof(int);

  Node *root = buildBST(arr, n);
  inorder(root);
  cout << endl;
  return 0;
}

/*
Steps to insert a node in BST:
1. If the root is NULL, create a new node with the given value and return it.
2. If the value to be inserted is less than the root's data, recursively call the insert function on the left subtree.
3. If the value to be inserted is greater than or equal to the root's data, recursively call the insert function on the right subtree.
4. Return the root node after the insertion is done.
Steps to build a BST from an array of values:
1. Initialize the root of the BST as NULL.
2. Iterate through each element in the array and call the insert function to insert the element into the BST.
3. Return the root of the BST after all elements have been inserted.

Time Complexity:
- Inserting a node in BST has a time complexity of O(h), where h is the height of the tree. In the worst case, when the tree is skewed, the height can be O(n), where n is the number of nodes in the tree. In the best case, when the tree is balanced, the height can be O(log n).
- Building a BST from an array of values has a time complexity of O(n*h), where n is the number of elements in the array and h is the height of the tree. In the worst case, when the tree is skewed, the height can be O(n), resulting in a time complexity of O(n^2). In the best case, when the tree is balanced, the height can be O(log n), resulting in a time complexity of O(n log n).

*/