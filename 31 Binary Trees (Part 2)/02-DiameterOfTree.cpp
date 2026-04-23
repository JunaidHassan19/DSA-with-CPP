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

// Diameter of a Tree -TC: O(n) - SC: O(n)
pair<int, int> diameter(Node *root) // Returns a pair of diameter and height
{
  if (root == NULL)
  {
    return make_pair(0, 0);
  }
  pair<int, int> leftInfo = diameter(root->left);   // Returns a pair of diameter and height
  pair<int, int> rightInfo = diameter(root->right); // Returns a pair of diameter and height

  int currDiameter = leftInfo.second + rightInfo.second + 1;                   // Diameter passing through the current node-TC: O(1)
  int finalDiameter = max(currDiameter, max(leftInfo.first, rightInfo.first)); // Final diameter is the maximum of the diameter passing through the current node, left subtree diameter and right subtree diameter
  int finalHt = max(leftInfo.second, rightInfo.second) + 1;

  return make_pair(finalDiameter, finalHt);
}

int main()
{
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node *root = buildTree(nodes);

  cout << "Diameter = " << diameter(root).first << endl; // Diameter is the first element of the pair returned by the diameter function
  cout << "Height = " << diameter(root).second << endl;  // Height is the second element of the pair returned by the diameter function
  cout << endl;
  return 0;
}