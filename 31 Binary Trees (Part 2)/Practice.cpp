#include <iostream>
#include <vector>
using namespace std;

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

int height(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }

  int leftHt = height(root->left);
  int rightHt = height(root->right);
  int currHt = max(leftHt, rightHt) + 1;

  return currHt;
}

// Practice -Diameter of a Tree -TC: O(n^2)
int diameter1(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }

  int currDiam = height(root->left) + height(root->right) + 1;
  int leftDiam = diameter1(root->left);
  int rightDiam = diameter1(root->right);

  return max(currDiam, max(leftDiam, rightDiam));
}

int main()
{
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node *root = buildTree(nodes);

  cout << "Diameter = " << diameter1(root) << endl;
  cout << endl;
  return 0;
}