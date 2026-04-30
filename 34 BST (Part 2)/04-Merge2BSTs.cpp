#include <iostream>
#include <vector>
using namespace std;

// Merge 2 BSTs
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

Node *BSTfromSortedVec(vector<int> arr, int st, int end)
{
  if (st > end)
  {
    return NULL;
  }

  int mid = st + (end - st) / 2;
  Node *curr = new Node(arr[mid]);

  curr->left = BSTfromSortedVec(arr, st, mid - 1);
  curr->right = BSTfromSortedVec(arr, mid + 1, end);

  return curr;
}

void preorder(Node *root)
{
  if (root == NULL)
  {
    return;
  }

  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

void getInorder(Node *root, vector<int> &nodes)
{
  if (root == NULL)
  {
    return;
  }

  getInorder(root->left, nodes);
  nodes.push_back(root->data);
  getInorder(root->right, nodes);
}

// Function to merge two BSTs and return the root of the merged BST
Node *mergeBSTs(Node *root1, Node *root2)
{
  vector<int> nodes1;
  vector<int> nodes2;
  vector<int> merged;

  getInorder(root1, nodes1);
  getInorder(root2, nodes2);

  int i = 0, j = 0;
  while (i < nodes1.size() && j < nodes2.size())
  {
    if (nodes1[i] < nodes2[j])
    {
      merged.push_back(nodes1[i++]);
    }
    else
    {
      merged.push_back(nodes2[j++]);
    }
  }

  while (i < nodes1.size())
  {
    merged.push_back(nodes1[i++]);
  }

  while (j < nodes2.size())
  {
    merged.push_back(nodes2[j++]);
  }

  return BSTfromSortedVec(merged, 0, merged.size() - 1); // Building a balanced BST from the merged sorted vector of nodes
}

int main()
{
  Node *root1 = new Node(2);
  root1->left = new Node(1);
  root1->right = new Node(4);

  Node *root2 = new Node(9);
  root2->left = new Node(3);
  root2->right = new Node(12);

  Node *root = mergeBSTs(root1, root2);
  preorder(root);
  cout << endl;

  return 0;
}