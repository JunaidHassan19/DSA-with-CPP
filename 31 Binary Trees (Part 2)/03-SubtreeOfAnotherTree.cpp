#include <iostream>
#include <vector>
using namespace std;

// Subtree of Another Tree -TC: O(n*m) - SC: O(n+m)
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

// Check if two trees are identical -TC: O(n)
bool isIdentical(Node *root1, Node *root2)
{
  if (root1 == NULL && root2 == NULL)
  {
    return true;
  }
  else if (root1 == NULL || root2 == NULL)
  {
    return false;
  }

  if (root1->data != root2->data)
  {
    return false;
  }

  return isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right);
}

// Check if subRoot is a subtree of root -TC: O(n*m)
bool isSubtree(Node *root, Node *subRoot)
{
  if (root == NULL && subRoot == NULL)
  {
    return true;
  }
  else if (root == NULL || subRoot == NULL)
  {
    return false;
  }
  if (root->data == subRoot->data)
  {
    if (isIdentical(root, subRoot))
    {
      return true;
    }
  }

  int isleftSubtree = isSubtree(root->left, subRoot);
  if (!isleftSubtree)
  {
    return isSubtree(root->right, subRoot);
  }

  return true;
}

int main()
{
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node *root = buildTree(nodes);

  Node *subroot = new Node(2);
  subroot->left = new Node(4);
  subroot->right = new Node(5);

  cout << isSubtree(root, subroot) << endl;
  return 0;
}