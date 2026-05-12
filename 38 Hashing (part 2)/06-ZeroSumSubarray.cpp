#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

// Largest Subarray with 0 Sum
int largestSubWith0Sum(vector<int> arr) // tc = O(n)
{
  unordered_map<int, int> m; // sum, index
  int sum = 0;
  int ans = 0;

  for (int j = 0; j < arr.size(); j++)
  {
    sum += arr[j];

    if (m.count(sum))
    {
      int currLen = j - m[sum];
      ans = max(ans, currLen);
    }
    else
    {
      m[sum] = j;
    }
  }
  return ans;
}

int main()
{
  vector<int> arr = {15, -2, 2, -8, 1, 7, 10};

  cout << "Largest Subarray with 0 Sum : " << largestSubWith0Sum(arr);
  return 0;
}