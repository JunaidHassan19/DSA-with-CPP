#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

// Lowest Common Ancestor (LCA) of two nodes in a binary tree - Approach 2 Tc: O(n) Sc: O(1)
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

static int idx = -1;
Node *buildTree(vector<int> nodes)
{
  idx++;
  if (nodes[idx] == -1)
  {
    return NULL;
  }
  Node *currNode = new Node(nodes[idx]);
  currNode->left = buildTree(nodes);
  currNode->right = buildTree(nodes);

  return currNode;
}

// Function to find the Lowest Common Ancestor (LCA) of two nodes in a binary tree
Node *LCA(Node *root, int n1, int n2)
{
  if (root == NULL) // Base case: if the current node is NULL, return NULL
  {
    return NULL;
  }

  if (root->data == n1 || root->data == n2) // If either n1 or n2 matches the current node's data, return the current node
  {
    return root; // This means we have found one of the nodes, and we return it to the caller
  }

  Node *leftLCA = LCA(root->left, n1, n2);   // Recur for the left subtree
  Node *rightLCA = LCA(root->right, n1, n2); // Recur for the right subtree

  if (leftLCA != NULL && rightLCA != NULL) // If both leftLCA and rightLCA are not NULL, it means n1 and n2 are found in different subtrees, so the current node is their LCA
  {
    return root; // Return the current node as the LCA
  }

  return leftLCA == NULL ? rightLCA : leftLCA; // If one of leftLCA or rightLCA is NULL, return the non-NULL value. This means both n1 and n2 are located in the same subtree.
}

int main()
{
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node *root = buildTree(nodes);
  int n1 = 4;
  int n2 = 6;
  cout << "LCA = " << LCA(root, n1, n2)->data;

  return 0;
}

/*
Time Complexity: O(n) - We visit each node at most once to find the LCA.
Space Complexity: O(1) - We are not using any additional data structures that grow with the size of the input. The space used by the recursion stack is O(h) where h is the height of the tree, but this is not considered additional space since it's part of the function call stack.
*/