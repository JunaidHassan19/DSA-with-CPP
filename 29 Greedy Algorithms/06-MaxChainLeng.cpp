#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Maximum Length of Chain of Pairs

// We sort the pairs based on their second element (end time) in ascending order.
bool compare(pair<int, int> p1, pair<int, int> p2)
{
  return p1.second < p2.second;
}

int maxChainLength(vector<pair<int, int>> pairs)
{
  int n = pairs.size();

  sort(pairs.begin(), pairs.end(), compare); // Sort the pairs based on their end times in ascending order.
  int ans = 1;
  int currEnd = pairs[0].second;
  // We initialize the answer to 1 since we can always select at least one pair (the first one after sorting). We also keep track of the end time of the last selected pair (currEnd ).
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