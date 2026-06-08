#include <iostream>
#include <vector>
using namespace std;

// Update on Segment Tree - tc: O(log n) for updates
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

  int rangeSum(int qi, int qj, int si, int sj, int node)
  {
    if (qj < si || qi > sj)
    {
      return 0;
    }

    if (si >= qi && sj <= qj)
    {
      return tree[node];
    }

    int mid = si + (sj - si) / 2;
    return rangeSum(qi, qj, si, mid, 2 * node + 1) +
           rangeSum(qi, qj, mid + 1, sj, 2 * node + 2);
  }

  // Function to perform point update on the segment tree -tc: O(log n)
  void updateUtil(int idx, int newVal, int start, int end, int node)
  {
    // base case: If the segment represents a single element, update it in the tree
    if (start == end)
    {
      tree[node] = newVal;
      return;
    }

    //  Calculate the mid point of the current segment
    int mid = start + (end - start) / 2;

    // If the index to be updated is in the left subtree, recursively update the left subtree
    if (idx >= start && idx <= mid)
    {
      updateUtil(idx, newVal, start, mid, 2 * node + 1);
    }
    else // If the index to be updated is in the right subtree, recursively update the right subtree
    {
      updateUtil(idx, newVal, mid + 1, end, 2 * node + 2);
    }

    // After updating the left or right subtree, update the current node to reflect the change
    tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
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

  int rangeQuery(int qi, int qj)
  {
    return rangeSum(qi, qj, 0, n - 1, 0);
  }

  // Public function to perform point update on the segment tree
  void updateQuery(int idx, int newVal)
  {
    updateUtil(idx, newVal, 0, n - 1, 0);
  }
};

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

  SegmentTree st(arr);
  cout << "Initial Tree: ";
  st.printTree();
  cout << st.rangeQuery(2, 5) << endl; // Output: 3 + 4 + 5 + 6 = 18
  cout << st.rangeQuery(0, 3) << endl; // Output: 1 + 2 + 3 + 4 = 10
  cout << st.rangeQuery(6, 7) << endl; // Output: 7 + 8 = 15

  cout << "Tree after updating index 1 with value 3: ";
  st.updateQuery(1, 3);
  cout << st.rangeQuery(0, 3) << endl; // Output: 1 + 3 + 3 + 4 = 11

  st.printTree();
  return 0;
}