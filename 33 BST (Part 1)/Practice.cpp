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

// Practice - Delete a node in BST
Node *getInorderSuccessor(Node *root)
{
  while (root->left != NULL)
  {
    root = root->left;
  }

  return root;
}

Node *delNode(Node *root, int val)
{
  // Base case
  if (root == NULL)
  {
    return NULL;
  }

  // Recursive case
  if (val < root->data) // Go to left subtree
  {
    root->left = delNode(root->left, val);
  }

  else if (val > root->data) // Go to right subtree
  {
    root->right = delNode(root->right, val);
  }
  else
  {
    // root == val -> delete this node -Case 1: No child
    if (root->left == NULL && root->right == NULL)
    {
      delete root;
      return NULL;
    }

    // Case 2: One child
    if (root->left == NULL || root->right == NULL)
    {
      return root->left == NULL ? root->right : root->left;
    }

    // Case 3: Two children
    Node *IS = getInorderSuccessor(root->right);
    root->data = IS->data;
    root->right = delNode(root->right, IS->data);
    return root;
  }

  return root;
}

// Practice -Print all the nodes in the given range
void printRange(Node *root, int start, int end)
{
  if (root == NULL)
  {
    return;
  }

  if (start <= root->data && end >= root->data)
  {
    printRange(root->left, start, end);
    cout << root->data << " ";
    printRange(root->right, start, end);
  }
  else if (root->data < start)
  {
    printRange(root->right, start, end);
  }
  else
  {
    printRange(root->left, start, end);
  }
}

int main()
{
  // int arr[] = {5, 1, 3, 4, 2, 7};
  int arr[] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
  int n = sizeof(arr) / sizeof(int);

  Node *root = buildBST(arr, n);
  // inorder(root);

  // int key = 4;
  // cout << search(root, key);

  // inorder(root);
  // cout << endl;

  // delNode(root, 8);

  // inorder(root);
  // cout << endl;

  printRange(root, 5, 12);

  cout << endl;
  return 0;
}