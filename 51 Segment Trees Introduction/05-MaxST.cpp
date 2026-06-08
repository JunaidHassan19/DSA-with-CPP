#include <iostream>
#include <vector>
using namespace std;

// Maximum Segment Tree implementation for maximum queries - tc: O(n) for building the tree, O(log n) for queries
class SegmentTree
{
  vector<int> tree;
  int n;

  // Function to build the segment tree for maximum queries
  // tc: O(n) for building the tree
  void buildTree(vector<int> &nums, int start, int end, int node)
  {
    if (start == end)
    {
      tree[node] = nums[start];
      return;
    }

    int mid = start + (end - start) / 2;

    buildTree(nums, start, mid, 2 * node + 1);
    buildTree(nums, mid + 1, end, 2 * node + 2);

    tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
  }

  // Function to perform range maximum query on the segment tree
  // tc: O(log n) for queries
  int maxQuery(int qi, int qj, int si, int sj, int node)
  {
    if (qj < si || qi > sj)
    {
      return INT_MIN; // Return minimum integer for no overlap case
    }

    if (si >= qi && sj <= qj)
    {
      return tree[node]; // Return the value of the current node for complete overlap case
    }

    int mid = si + (sj - si) / 2;

    int leftMax = maxQuery(qi, qj, si, mid, 2 * node + 1);
    int rightMax = maxQuery(qi, qj, mid + 1, sj, 2 * node + 2);
    return max(leftMax, rightMax);
  }

  // Function to perform point update on the segment tree
  void updateUtil(int idx, int newVal, int start, int end, int node)
  {
    if (start == end)
    {
      tree[node] = newVal;
      return;
    }

    int mid = start + (end - start) / 2;

    if (idx >= start && idx <= mid)
    {
      updateUtil(idx, newVal, start, mid, 2 * node + 1);
    }
    else
    {
      updateUtil(idx, newVal, mid + 1, end, 2 * node + 2);
    }

    tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
  }

public:
  SegmentTree(vector<int> &nums)
  {
    n = nums.size();
    tree.resize(4 * n);
    buildTree(nums, 0, n - 1, 0);
  }

  void printTree()
  {
    for (int i = 0; i < tree.size(); i++)
    {
      cout << tree[i] << " ";
    }
    cout << endl;
  }

  // Public function to perform range maximum query on the segment tree
  int rangeMaxQuery(int qi, int qj)
  {
    return maxQuery(qi, qj, 0, n - 1, 0);
  }

  // Public function to update a value in the segment tree
  void update(int idx, int newVal)
  {
    updateUtil(idx, newVal, 0, n - 1, 0);
  }
};

int main()
{
  vector<int> nums = {6, 8, -1, 2, 17, 1, 3, 2, 4};

  SegmentTree st(nums);
  st.printTree();
  cout << "Maximum in range [2, 5]: " << st.rangeMaxQuery(2, 5) << endl;

  st.update(4, 5); // Update index 4 to value 5
  cout << "Maximum in range [0, 8] after update: " << st.rangeMaxQuery(0, 8) << endl;
  st.printTree();
  return 0;
}