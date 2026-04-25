#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

// Lowest Common Ancestor (LCA) of two nodes in a binary tree - Approach 1 Tc: O(n) Sc: O(n)
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

// Root to node path
bool rootToNodePath(Node *root, int n, vector<int> &path)
{
  if (root == NULL)
  {
    return false;
  }

  path.push_back(root->data); // Add current node's data to the path
  if (root->data == n)
  {
    return true;
  }

  int isLeft = rootToNodePath(root->left, n, path);   // Search in left subtree
  int isRight = rootToNodePath(root->right, n, path); // Search in right subtree

  if (isLeft || isRight) // If node is found in either left or right subtree, return true
  {
    return true;
  }

  path.pop_back(); // If node is not found in either subtree, remove current node from path and return false
  return false;
}

// Lowest Common Ancestor (LCA) of two nodes in a binary tree
int LCA(Node *root, int n1, int n2)
{
  vector<int> path1;
  vector<int> path2;

  rootToNodePath(root, n1, path1);
  rootToNodePath(root, n2, path2);

  int lca = -1;                                                          // Initialize LCA to -1 (indicating no common ancestor found yet)
  for (int i = 0, j = 0; i < path1.size() && j < path2.size(); i++, j++) // Compare nodes at the same index in both paths
  {
    if (path1[i] != path2[j]) // If nodes differ, we have found the point of divergence, so return the last common node (LCA)
    {
      return lca;
    }
    lca = path1[i];
  }

  return lca;
}

int main()
{
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node *root = buildTree(nodes);

  int n1 = 4, n2 = 5;
  cout << "LCA = " << LCA(root, n1, n2);
  return 0;
}