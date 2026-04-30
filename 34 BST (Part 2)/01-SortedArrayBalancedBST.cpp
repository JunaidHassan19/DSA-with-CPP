#include <iostream>
#include <vector>
using namespace std;

// Sorted Array to Balanced BST
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

Node *buildBSTfromSorted(int arr[], int st, int end)
{
  if (st > end)
  {
    return NULL;
  }

  int mid = st + (end - st) / 2;   // calculating mid to avoid overflow
  Node *curr = new Node(arr[mid]); // creating a new node with the middle element of the array

  curr->left = buildBSTfromSorted(arr, st, mid - 1);
  curr->right = buildBSTfromSorted(arr, mid + 1, end);

  return curr;
}

// Preorder Traversal of the BST
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

int main()
{
  int arr[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(arr) / sizeof(int);

  Node *root = buildBSTfromSorted(arr, 0, n - 1);
  preorder(root);
  cout << endl;

  return 0;
}