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

// Practice -Kth level of the binary tree
/*
void kthHelper(Node *root, int K, int currLevel)
{
  if (root == NULL)
  {
    return;
  }

  if (currLevel == K)
  {
    cout << root->data << " ";
    return;
  }

  kthHelper(root->left, K, currLevel + 1);
  kthHelper(root->right, K, currLevel + 1);
}

void KthLevel(Node *root, int K)
{
  kthHelper(root, K, 1);
  return;
}
*/

// Practice - Lowest Common Ancestor (LCA) of two nodes in a binary tree
/*
bool rootToNodePath(Node *root, int n, vector<int> &path)
{
  if (root == NULL)
  {
    return false;
  }

  path.push_back(root->data);

  if (root->data == n)
  {
    return true;
  }

  int isLeft = rootToNodePath(root->left, n, path);
  int isRight = rootToNodePath(root->right, n, path);

  if (isLeft || isRight)
  {
    return true;
  }

  path.pop_back();
  return false;
}

int LCA(Node *root, int n1, int n2)
{
  vector<int> path1;
  vector<int> path2;

  rootToNodePath(root, n1, path1);
  rootToNodePath(root, n2, path2);

  int lca = -1;
  for (int i = 0, j = 0; i < path1.size() && j < path2.size(); i++, j++)
  {
    if (path1[i] != path2[j])
    {
      return lca;
    }
    lca = path1[i];
  }
  return lca;
}
*/

// Practice - Lowest Common Ancestor (LCA) of two nodes in a binary tree - Approach 2
/*

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

// Practice - Minimum distance between two nodes in a binary tree

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

int nimDist(Node *root, int n1, int n2)
{
  Node *lcs = LCA(root, n1, n2);

  int dist1 = dist(root, n1);
  int dist2 = dist(root, n2);

  return dist1 + dist2;
}

*/

// Practice - Kth ancestor of a node in a binary tree
/*
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

  int leftDist = KthAncestor(root->left, node, K);
  int rightDist = KthAncestor(root->right, node, K);

  if (leftDist == -1 && rightDist == -1)
  {
    return -1;
  }

  int validVal = leftDist == -1 ? rightDist : leftDist;
  if (validVal + 1 == K)
  {
    cout << "Kth Ancestor : " << root->data << endl;
  }
  return validVal + 1;
}
*/

// Practice - Transform to sum tree
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

int transform(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }

  int leftOld = transform(root->left);
  int rightOld = transform(root->right);
  int currOld = root->data;

  root->data = leftOld + rightOld;

  if (root->left != NULL)
  {
    root->data += root->left->data;
  }

  if (root->right != NULL)
  {
    root->data += root->right->data;
  }

  return currOld;
}

int main()
{
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node *root = buildTree(nodes);
  // int K = 3;
  // KthLevel(root, K);

  // int n1 = 4, n2 = 5;
  // cout << "LCA = " << LCA(root, n1, n2) << endl;

  // int n1 = 4;
  // int n2 = 6;
  // cout << "LCA = " << LCA(root, n1, n2)->data << endl;

  // int n1 = 4, n2 = 6;
  // cout << "min Dist = " << nimDist(root, n1, n2) << endl;

  // int node = 5, K = 2;
  // cout << KthAncestor(root, node, K);

  transform(root);
  levelOrder(root);
  return 0;
}