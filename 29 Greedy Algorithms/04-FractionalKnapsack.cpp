#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Fractional Knapsack problem
bool compare(pair<double, int> p1, pair<double, int> p2)
{
  return p1.first > p2.first; // Sort in descending order based on the value-to-weight ratio
}
int fractionalKnapsack(vector<int> val, vector<int> wt, int W)
{
  int n = val.size();
  vector<pair<double, int>> ratio(n, make_pair(0.0, 0));

  for (int i = 0; i < n; i++)
  {
    double r = val[i] / (double)wt[i];
    ratio[i] = make_pair(r, i);
  }

  sort(ratio.begin(), ratio.end(), compare);

  int ans = 0;
  // We iterate through the sorted ratio vector and keep adding items to the knapsack until we reach the weight limit W.
  for (int i = 0; i < n; i++)
  {
    int idx = ratio[i].second;
    if (wt[idx] <= W)
    {
      ans += val[idx];
      W -= wt[idx];
    }
    else
    {
      ans += ratio[i].first * W;
      W = 0;
      break;
    }
  }
  cout << "Max value = " << ans << endl;
  return ans;
}

int main()
{
  vector<int> val = {60, 100, 120};
  vector<int> wt = {10, 20, 30};
  int W = 50;

  fractionalKnapsack(val, wt, W);

  return 0;
}

/*
Steps to solve the Fractional Knapsack problem:
1. Calculate the value-to-weight ratio for each item and store it in a vector of pairs, where the first element of the pair is the ratio and the second element is the index of the item.
2. Sort the vector of pairs in descending order based on the value-to-weight ratio.
3. Iterate through the sorted vector and add items to the knapsack until the weight limit W is reached.
4. If the weight of the current item is less than or equal to the remaining weight W, add the entire value of the item to the answer and subtract its weight from W.
5. If the weight of the current item is greater than the remaining weight W, add the fraction of the item's value that corresponds to the remaining weight W to the answer and set W to 0, as we cannot add any more items.
Time Complexity: O(n log n) due to the sorting step, where n is the number of items.
*/