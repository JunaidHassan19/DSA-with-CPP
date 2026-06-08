#include <iostream>
#include <vector>
using namespace std;

// Queries on Segment Tree - tc: O(log n) for queries
class SegmentTree
{
  vector<int> tree;
  int n;

  void buildTree(vector<int> &arr, int start, int end, int node)
  {
    if (start == end)
    {
      tree[node] = arr[start];
      return;
    }

    int mid = start + (end - start) / 2;

    buildTree(arr, start, mid, 2 * node + 1);
    buildTree(arr, mid + 1, end, 2 * node + 2);

    tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
  }

  // Function to perform range sum query on the segment tree
  // tc: O(log n) for queries
  int rangeSum(int qi, int qj, int si, int sj, int node)
  {
    // No overlap case
    if (qj < si || qi > sj)
    {
      return 0;
    }

    // Complete overlap case
    if (si >= qi && sj <= qj)
    {
      return tree[node];
    }

    // Partial overlap case
    int mid = si + (sj - si) / 2;
    return rangeSum(qi, qj, si, mid, 2 * node + 1) +
           rangeSum(qi, qj, mid + 1, sj, 2 * node + 2);
  }

public:
  SegmentTree(vector<int> &arr)
  {
    n = arr.size();
    tree.resize(4 * n);
    buildTree(arr, 0, n - 1, 0);
  }

  void printTree()
  {
    for (int i = 0; i < tree.size(); i++)
    {
      cout << tree[i] << " ";
    }
    cout << endl;
  }

  // Public function to call the range sum query
  int rangeQuery(int qi, int qj)
  {
    return rangeSum(qi, qj, 0, n - 1, 0);
  }
};

int main()
{
  // Range sum query
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

  SegmentTree st(arr);
  cout << st.rangeQuery(2, 5) << endl; // Output: 3 + 4 + 5 + 6 = 18
  cout << st.rangeQuery(0, 3) << endl; // Output: 1 + 2 + 3 + 4 = 10
  cout << st.rangeQuery(6, 7) << endl; // Output: 7 + 8 = 15
  return 0;
}