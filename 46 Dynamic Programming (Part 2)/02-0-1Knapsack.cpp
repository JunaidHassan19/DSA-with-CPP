#include <iostream>
#include <vector>
using namespace std;

// 0-1 Knapsack Problem using Recursion -tc: O(2^n) sc: O(n)
int knapsack(vector<int> val, vector<int> wt, int W, int n)
{
  // Base case
  if (n == 0 || W == 0)
  {
    return 0;
  }

  int itemWt = wt[n - 1];   // weight of the last item
  int itemVal = val[n - 1]; // value of the last item

  // choice diagram
  if (itemWt <= W)
  {
    // Include the item
    int ans1 = knapsack(val, wt, W - itemWt, n - 1) + itemVal;

    // exclude the item
    int ans2 = knapsack(val, wt, W, n - 1);

    return max(ans1, ans2);
  }
  else
  {
    // exclude the item
    return knapsack(val, wt, W, n - 1);
  }
}

int main()
{
  vector<int> val = {15, 14, 10, 45, 30};
  vector<int> wt = {2, 5, 1, 3, 4};
  int W = 7;
  int n = 5;

  cout << knapsack(val, wt, W, n) << endl;
  return 0;
}