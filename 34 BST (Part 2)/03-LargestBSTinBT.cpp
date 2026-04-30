#include <iostream>
#include <vector>
using namespace std;

// Largest BST in a Binary Tree
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

class Info
{
public:
  bool isBST;
  int min;
  int max;
  int sz;

  Info(bool IsBST, int min, int max, int sz)
  {
    this->isBST = IsBST;
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

/*
Steps to find the largest BST in a Binary Tree:
1. Create a class `Info` to store information about the subtree, including whether it is a BST, its minimum and maximum values, and its size.
2. Define a recursive function `largestBST` that takes a node as input and returns an `Info` object.
3. If the current node is NULL, return an `Info` object indicating that it is a BST with minimum value as INT_MAX, maximum value as INT_MIN, and size 0.
4. Recursively call `largestBST` for the left and right subtrees to get their information.
5. Calculate the minimum and maximum values for the current subtree using the information from the left and right subtrees.
6. Calculate the size of the current subtree as the sum of the sizes of the left and right subtrees plus one for the current node.
7. Check if the current subtree is a BST by verifying that the left subtree is a BST, the right subtree is a BST, and the current node's value is greater than the maximum value of the left subtree and less than the minimum value of the right subtree.
8. If the current subtree is a BST, update the global variable `maxSize` with the maximum of `maxSize` and the size of the current subtree, and return an `Info` object indicating that it is a BST with the calculated minimum, maximum, and size.
9. If the current subtree is not a BST, update `maxSize` with the maximum of `maxSize` and the sizes of the left and right subtrees, and return an `Info` object indicating that it is not a BST with the calculated minimum, maximum, and size.

Time Complexity: O(N), where N is the number of nodes in the binary tree, as we visit each node once.
*/