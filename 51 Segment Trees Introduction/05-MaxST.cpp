#include <iostream>
#include <vector>
using namespace std;

// Create a Segment Tree for maximum queries - tc: O(n) for building the tree, O(log n) for queries and updates
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
};

int main()
{
  vector<int> nums = {6, 8, -1, 2, 17, 1, 3, 2, 4};

  SegmentTree st(nums);
  st.printTree();
  return 0;
}