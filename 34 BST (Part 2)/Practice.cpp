#include <iostream>
#include <vector>
using namespace std;

// Practice -Sorted Array to Balanced BST
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

  int mid = st + (end - st) / 2;
  Node *curr = new Node(arr[mid]);

  curr->left = buildBSTfromSorted(arr, st, mid - 1);
  curr->right = buildBSTfromSorted(arr, mid + 1, end);

  return curr;
}

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

// Prctice -BST to Balanced BST
Node *BSTfromSortedVec(vector<int> arr, int st, int end)
{
  if (st > end)
  {
    return NULL;
  }

  int mid = st + (end - st) / 2;
  Node *curr = new Node(arr[mid]);

  curr->left = BSTfromSortedVec(arr, st, mid - 1);
  curr->right = BSTfromSortedVec(arr, mid + 1, end);

  return curr;
}

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

Node *balanceBST(Node *root)
{
  vector<int> nodes;
  getInorder(root, nodes);

  return BSTfromSortedVec(nodes, 0, nodes.size() - 1);
}

// Practice -Largest BST in a Binary Tree

class Info
{
public:
  bool isBST;
  int min;
  int max;
  int sz;

  Info(bool isBST, int min, int max, int sz)
  {
    this->isBST = isBST;
    this->min = min;
    this->max = max;
    this->sz = sz;
  }
};

static int maxSize;

Info *largestBST(Node *root)
{
  if (root == NULL)
  {
    return new Info(true, INT_MAX, INT_MIN, 0);
  }

  Info *leftInfo = largestBST(root->left);
  Info *rightInfo = largestBST(root->right);

  int currMin = min(root->data, min(leftInfo->min, rightInfo->min));
  int currMax = max(root->data, max(leftInfo->max, rightInfo->max));
  int currSz = leftInfo->sz + rightInfo->sz + 1;

  if (leftInfo->isBST && rightInfo->isBST && root->data > leftInfo->max && root->data < rightInfo->min)
  {
    maxSize = max(maxSize, currSz);
    return new Info(true, currMin, currMax, currSz);
  }

  maxSize = max(maxSize, max(leftInfo->sz, rightInfo->sz));
  return new Info(false, currMin, currMax, currSz);
}

int main()
{
  // int arr[7] = {3, 4, 5, 6, 7, 8, 9};
  // Node *root = buildBSTfromSorted(arr, 0, 6);
  // preorder(root);
  // cout << endl;

  // Node *root = new Node(6);
  // root->left = new Node(5);
  // root->left->left = new Node(4);
  // root->left->left->left = new Node(3);

  // root->right = new Node(7);
  // root->right->right = new Node(8);
  // root->right->right->right = new Node(9);

  // root = balanceBST(root);
  // preorder(root);
  // cout << endl;

  Node *root = new Node(50);
  root->left = new Node(30);
  root->left->left = new Node(5);
  root->left->left->left = new Node(20);

  root->right = new Node(60);
  root->right->right = new Node(45);
  root->right->right->right = new Node(70);
  root->right->right->right->left = new Node(65);
  root->right->right->right->right = new Node(80);

  largestBST(root);
  cout << "Max Size : " << maxSize << endl;
  return 0;
}