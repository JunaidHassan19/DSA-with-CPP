#include <iostream>
#include <vector>
#include <queue>
#include <map>
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
/*
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

// Practice -Diameter of a Tree -TC: O(n)
pair<int, int> diameter2(Node *root)
{
  if (root == NULL)
  {
    return make_pair(0, 0);
  }
  pair<int, int> leftInfo = diameter2(root->left);
  pair<int, int> rightInfo = diameter2(root->right);

  int currDiameter = leftInfo.second + rightInfo.second + 1;
  int finalDiameter = max(currDiameter, max(leftInfo.first, rightInfo.first));
  int finalHt = max(leftInfo.second, rightInfo.second) + 1;

  return make_pair(finalDiameter, finalHt);
}

*/

// Pracrice -Subtree of another tree
/*
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
 */

// Practice -Top View of a Tree
void topView(Node *root)
{
  queue<pair<Node *, int>> Q;
  map<int, int> m;

  Q.push(make_pair(root, 0));
  while (!Q.empty())
  {
    pair<Node *, int> curr = Q.front();
    Q.pop();

    Node *currNode = curr.first;
    int currHD = curr.second;

    if (m.count(currHD) == 0)
    {
      m[currHD] = currNode->data;
    }

    if (currNode->left != NULL)
    {
      pair<Node *, int> left = make_pair(currNode->left, currHD - 1);
      Q.push(left);
    }

    if (currNode->right != NULL)
    {
      pair<Node *, int> right = make_pair(currNode->right, currHD + 1);
      Q.push(right);
    }
  }

  for (auto it : m)
  {
    cout << it.second << " ";
  }
}

int main()
{
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node *root = buildTree(nodes);

  // cout << "Diameter = " << diameter2(root).first << endl;

  // Node *subroot = new Node(2);
  // subroot->left = new Node(4);
  // subroot->right = new Node(5);
  // cout << isSubtree(root, subroot) << endl;

  topView(root);
  cout << endl;
  return 0;
}