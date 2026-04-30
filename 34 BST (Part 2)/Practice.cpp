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

// Practice -Merge 2 BSTs
Node *mergeBSTs(Node *root1, Node *root2)
{
  vector<int> nodes1;
  vector<int> nodes2;
  vector<int> merged;

  getInorder(root1, nodes1);
  getInorder(root2, nodes2);

  int i = 0, j = 0;
  while (i < nodes1.size() && j < nodes2.size())
  {
    if (nodes1[i] < nodes2[j])
    {
      merged.push_back(nodes1[i++]);
    }
    else
    {
      merged.push_back(nodes2[j++]);
    }
  }

  while (i < nodes1.size())
  {
    merged.push_back(nodes1[i++]);
  }

  while (j < nodes2.size())
  {
    merged.push_back(nodes2[j++]);
  }

  return BSTfromSortedVec(merged, 0, merged.size() - 1); // Building a balanced BST from the merged sorted vector of nodes
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

  // Node *root = new Node(50);
  // root->left = new Node(30);
  // root->left->left = new Node(5);
  // root->left->left->left = new Node(20);

  // root->right = new Node(60);
  // root->right->right = new Node(45);
  // root->right->right->right = new Node(70);
  // root->right->right->right->left = new Node(65);
  // root->right->right->right->right = new Node(80);

  // largestBST(root);
  // cout << "Max Size : " << maxSize << endl;

  Node *root1 = new Node(2);
  root1->left = new Node(1);
  root1->right = new Node(4);

  Node *root2 = new Node(9);
  root2->left = new Node(3);
  root2->right = new Node(12);

  Node *root = mergeBSTs(root1, root2);
  preorder(root);
  cout << endl;

  return 0;
}