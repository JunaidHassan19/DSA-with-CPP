#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Practice Problem: Activity Selection Problem
/*
int maxActivities(vector<int> start, vector<int> end)
{
  int count = 1;
  int currEndTime = end[0];
  for (int i = 1; i < start.size(); i++)
  {
    if (start[i] >= currEndTime)
    {
      count++;
      currEndTime = end[i];
    }
  }
  return count;
}

int main()
{
  vector<int> start = {1, 3, 0, 5, 8, 5};
  vector<int> end = {2, 4, 6, 7, 9, 9};

  cout << maxActivities(start, end) << endl;
  return 0;
}
*/

// Practice Pair in C++
/*
bool complare(pair<int, int> p1, pair<int, int> p2)
{
  return p1.second > p2.second;
}

int main()
{
  vector<pair<int, int>> act(3, make_pair(0, 0));

  act[0] = make_pair(0, 9);
  act[1] = make_pair(1, 2);
  act[2] = make_pair(2, 4);

  for (int i = 0; i < act.size(); i++)
  {
    cout << "A" << i << " : " << act[i].first << ", " << act[i].second << endl;
  }

  sort(act.begin(), act.end(), complare);
  return 0;
}
*/

// Practice Fractional Knapsack
/*
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
*/

// Practice Maximum Length of Chain of Pairs
/*
bool compare(pair<int, int> p1, pair<int, int> p2)
{
  return p1.second < p2.second;
}

int maxChainLength(vector<pair<int, int>> pairs)
{
  int n = pairs.size();

  sort(pairs.begin(), pairs.end(), compare);
  int ans = 1;
  int currEnd = pairs[0].second;
  for (int i = 1; i < n; i++)
  {
    if (pairs[i].first > currEnd)
    {
      ans++;
      currEnd = pairs[i].second;
    }
  }

  cout << "Max chain Length = " << ans << endl;
  return ans;
}

int main()
{
  int n = 5;
  vector<pair<int, int>> pairs(n, make_pair(0, 0));

  pairs[0] = make_pair(5, 24);
  pairs[1] = make_pair(39, 60);
  pairs[2] = make_pair(5, 28);
  pairs[3] = make_pair(27, 40);
  pairs[4] = make_pair(50, 90);

  maxChainLength(pairs);
  return 0;
}
*/

// Practice Indian Coins Problem

int getMinChange(vector<int> coins, int V)
{
  int ans = 0;
  int n = coins.size();

  for (int i = n - 1; i >= 0 && V > 0; i--)
  {
    if (V >= coins[i])
    {
      ans += V / coins[i];
      V = V % coins[i];
    }
  }

  cout << "Minimum number of coins = " << ans << endl;
  return ans;
}

int main()
{
  vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
  int V = 1561;

  getMinChange(coins, V);

  return 0;
}
