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

int main()
{
  vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node *root = buildTree(nodes);
  int K = 3;
  KthLevel(root, K);
  cout << endl;
  return 0;
}