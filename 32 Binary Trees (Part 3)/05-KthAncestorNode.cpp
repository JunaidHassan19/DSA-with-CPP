#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

// Kth ancestor of a node in a binary tree
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

int KthAncestor(Node *root, int node, int K)
{
  if (root == NULL)
  {
    return -1;
  }

  if (root->data == node)
  {
    return 0;
  }

  // Recur for left subtree to find the distance of the target node from the current node
  int leftDist = KthAncestor(root->left, node, K);
  // Recur for right subtree to find the distance of the target node from the current node
  int rightDist = KthAncestor(root->right, node, K);

  if (leftDist == -1 && rightDist == -1) // If the target node is not found in either subtree, return -1
  {
    return -1;
  }

  // validVal holds the distance of the target node from the current node. It will be -1 if the target node is not found in either subtree, otherwise it will be the distance from the subtree where the target node is found.
  int validVal = leftDist == -1 ? rightDist : leftDist;
  if (validVal + 1 == K)
  {
    cout << "Kth Ancestor : " << root->data << endl;
  }

  return validVal + 1;
}

int main()
{
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node *root = buildTree(nodes);

  int node = 5, K = 2;
  cout << KthAncestor(root, node, K);
  return 0;
}

/*
Logic:
1. We perform a depth-first search (DFS) to find the target node in the binary tree.
2. When we find the target node, we return a distance of 0 to indicate that we are at the target node.
3. As we backtrack from the target node to the root, we increment the distance by 1 at each step.
4. If at any point the distance equals K, we print the current node's data as the Kth ancestor.
5. If we reach the root without finding the target node, we return -1 to indicate that the target node is not present in the tree.
Time Complexity: O(n) - We visit each node at most once to find the target node and to calculate the distances.
Space Complexity: O(h) - The space used by the recursion stack is O(h) where h is the height of the tree. In the worst case (skewed tree), this can be O(n). In a balanced tree, it would be O(log n).
*/