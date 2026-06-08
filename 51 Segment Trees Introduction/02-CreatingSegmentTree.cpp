#include <iostream>
#include <vector>
using namespace std;

// Segment Tree implementation for sum queries
class SegmentTree
{
  vector<int> tree;
  int n;

public:
  // Constructor to build the segment tree from the input array
  SegmentTree(vector<int> &arr)
  {
    n = arr.size();
    tree.resize(4 * n);
    buildTree(arr, 0, n - 1, 0);
  }

  // Function to build the segment tree
  void buildTree(vector<int> &arr, int start, int end, int node)
  {
    // Base case: If the segment represents a single element, store it in the tree
    if (start == end)
    {
      tree[node] = arr[start];
      return;
    }

    int mid = start + (end - start) / 2;

    // Recursively build the left and right subtrees
    buildTree(arr, start, mid, 2 * node + 1);
    // Recursively build the right subtree
    buildTree(arr, mid + 1, end, 2 * node + 2);

    // After building the left and right subtrees, store the sum of both in the current node
    tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
  }

  void printTree()
  {
    for (int i = 0; i < tree.size(); i++)
    {
      cout << tree[i] << " ";
    }
    cout << endl;
  }
};

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

  SegmentTree st(arr);

  st.printTree();
  return 0;
}