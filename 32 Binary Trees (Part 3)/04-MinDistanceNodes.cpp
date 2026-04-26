#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

// Minimum distance between two nodes in a binary tree
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

Node *LCA(Node *root, int n1, int n2)
{
  if (root == NULL)
  {
    return NULL;
  }

  if (root->data == n1 || root->data == n2)
  {
    return root;
  }

  Node *leftLCA = LCA(root->left, n1, n2);
  Node *rightLCA = LCA(root->right, n1, n2);

  if (leftLCA != NULL && rightLCA != NULL)
  {
    return root;
  }

  return leftLCA == NULL ? rightLCA : leftLCA;
}

int dist(Node *root, int n)
{
  if (root == NULL)
  {
    return -1;
  }

  if (root->data == n)
  {
    return 0;
  }

  int leftDist = dist(root->left, n);
  if (leftDist != -1)
  {
    return leftDist + 1;
  }

  int rightDist = dist(root->right, n);
  if (rightDist != -1)
  {
    return rightDist + 1;
  }

  return -1;
}

int minDist(Node *root, int n1, int n2)
{
  Node *lca = LCA(root, n1, n2);

  int dist1 = dist(lca, n1);
  int dist2 = dist(lca, n2);

  return dist1 + dist2;
}

int main()
{
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node *root = buildTree(nodes);

  int n1 = 4, n2 = 6;
  cout << "min Dist = " << minDist(root, n1, n2) << endl;
  return 0;
}

/*
Logic:
1. Find the Lowest Common Ancestor (LCA) of the two nodes n1 and n2 in the binary tree. The LCA is the lowest node in the tree that has both n1 and n2 as descendants (where we allow a node to be a descendant of itself).
2. Once we have the LCA, we need to find the distance from the LCA to each of the nodes n1 and n2. This can be done using a helper function that calculates the distance from a given node to a target node.
3. The minimum distance between the two nodes n1 and n2 will be the sum of the distances from the LCA to n1 and from the LCA to n2.
- The LCA function uses a recursive approach to find the LCA of n1 and n2. It checks if the current node is NULL, if it matches either n1 or n2, and then recursively searches in the left and right subtrees. If both left and right recursive calls return non-NULL values, it means n1 and n2 are found in different subtrees, so the current node is their LCA.
- The dist function calculates the distance from a given node to a target node n. It returns -1 if the target node is not found in the subtree rooted at the given node. If the target node is found, it returns the distance (number of edges) from the given node to the target node.
Time Complexity: O(n) - We visit each node at most once to find the LCA and to calculate the distances.
Space Complexity: O(h) - The space used by the recursion stack is O(h) where h is the height of the tree. In the worst case (skewed tree), this can be O(n). In a balanced tree, it would be O(log n).
*/