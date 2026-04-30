#include <iostream>
#include <vector>
using namespace std;

// BST to Balanced BST
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

// Function to convert a BST to a Balanced BST
Node *BSTfromSortedVec(vector<int> arr, int st, int end)
{
  if (st > end)
  {
    return NULL;
  }

  int mid = st + (end - st) / 2;   // calculating mid to avoid overflow
  Node *curr = new Node(arr[mid]); // creating a new node with the middle element of the array

  curr->left = BSTfromSortedVec(arr, st, mid - 1);
  curr->right = BSTfromSortedVec(arr, mid + 1, end);

  return curr;
}

// Function to get the inorder traversal of the BST and store it in a vector
void getInorder(Node *root, vector<int> &nodes)
{
  if (root == NULL)
  {
    return;
  }

  getInorder(root->left, nodes);
  nodes.push_back(root->data);
  getInorder(root->right, nodes);
}

// Function to balance the BST
Node *balanceBST(Node *root)
{
  vector<int> nodes;
  getInorder(root, nodes);

  return BSTfromSortedVec(nodes, 0, nodes.size() - 1); // Building a balanced BST from the sorted vector of nodes
}

int main()
{
  Node *root = new Node(6);
  root->left = new Node(5);
  root->left->left = new Node(4);
  root->left->left->left = new Node(3);

  root->right = new Node(7);
  root->right->right = new Node(8);
  root->right->right->right = new Node(9);

  root = balanceBST(root);
  preorder(root);
  cout << endl;

  return 0;
}