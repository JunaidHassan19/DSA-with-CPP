#include <iostream>
#include <vector>
using namespace std;

// Print all the root to leaf paths in a BST
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

void printPath(vector<int> path)
{
  cout << "Path : ";
  for (int i = 0; i < path.size(); i++)
  {
    cout << path[i] << " ";
  }
  cout << endl;
}

// Helper function to find the root to leaf path
void pathHelper(Node *root, vector<int> &path)
{
  if (root == NULL)
  {
    return;
  }
  path.push_back(root->data); // Add the current node to the path

  if (root->left == NULL && root->right == NULL) // If the current node is a leaf node, print the path
  {
    printPath(path); // Print the path from root to leaf
    path.pop_back(); // Remove the current node from the path before returning
    return;
  }

  pathHelper(root->left, path);  // Recur for the left subtree
  pathHelper(root->right, path); // Recur for the right subtree

  path.pop_back(); // Remove the current node from the path before returning
}

// Function to find the root to leaf path
void rootToleaf(Node *root)
{
  vector<int> path;       // Vector to store the path from root to leaf
  pathHelper(root, path); // Call the helper function to find the root to leaf path
}

int main()
{
  int arr[] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
  int n = sizeof(arr) / sizeof(int);

  Node *root = buildBST(arr, n);

  rootToleaf(root);
  cout << endl;
  return 0;
}