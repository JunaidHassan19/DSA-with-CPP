#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

// Transform to sum tree
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

// Helper function to perform level order traversal and print the tree
void levelOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }

  queue<Node *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {
    Node *curr = q.front();
    q.pop();

    if (curr == NULL)
    {
      cout << endl;
      if (q.empty())
      {
        break;
      }
      q.push(NULL);
    }
    else
    {
      cout << curr->data << " ";

      if (curr->left != NULL)
      {
        q.push(curr->left);
      }

      if (curr->right != NULL)
      {
        q.push(curr->right);
      }
    }
  }
}

// Function to transform the binary tree into a sum tree
int transform(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }

  int leftOld = transform(root->left);   // Recursively transform the left subtree and get the old value of the left child
  int rightOld = transform(root->right); // Recursively transform the right subtree and get the old value of the right child
  int currOld = root->data;              // Store the current node's old value before updating it to the sum of left and right subtrees

  root->data = leftOld + rightOld; // Update the current node's data to the sum of the old values of left and right children

  if (root->left != NULL) // If the left child exists, add its old value to the current node's data
  {
    root->data += root->left->data;
  }

  if (root->right != NULL) // If the right child exists, add its old value to the current node's data
  {
    root->data += root->right->data;
  }

  return currOld;
}

int main()
{
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node *root = buildTree(nodes);

  transform(root);
  levelOrder(root);
  return 0;
}

/*
Logic: The function transform recursively calculates the sum of all nodes in the left and right subtrees and updates the current node's data to this sum. It returns the old value of the current node before updating it.
- The base case is when the current node is NULL, in which case it returns 0.
- For each node, it first recursively transforms the left and right subtrees and stores their old values.
- It then updates the current node's data to the sum of the old values of the left and right children. If the left or right child exists, it also adds their old values to the current node's data.
- Finally, it returns the old value of the current node before the update, which is used by the parent node to calculate its new value.
- The levelOrder function is a helper function to print the tree level by level after transformation, allowing us to verify that the tree has been correctly transformed into a sum tree.

Time Complexity: O(n), where n is the number of nodes in the binary tree, since we visit each node exactly once to perform the transformation.
Space Complexity: O(h), where h is the height of the binary tree, due to the recursive call stack. In the worst case (skewed tree), this can be O(n). In a balanced tree, this would be O(log n).
*/