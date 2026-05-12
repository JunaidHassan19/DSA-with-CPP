#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

// Subarray Sum Equals K
// formula : sum[i..j] = sum[0..j] - sum[0..i-1]
int subarrayCountWithK(vector<int> arr, int K) // tc = O(n)
{
  unordered_map<int, int> m; // sum, count

  m[0] = 1;
  int sum = 0;
  int ans = 0;

  for (int j = 0; j < arr.size(); j++)
  {
    sum += arr[j];
    if (m.count(sum - K))
    {
      ans += m[sum - K];
    }

    if (m.count(sum))
    {
      m[sum]++;
    }
    else
    {
      m[sum] = 1;
    }
  }
  return ans;
}

int main()
{
  vector<int> arr = {10, 2, -2, -20, 10};
  int k = -10;

  cout << "Subarray count = " << subarrayCountWithK(arr, k) << endl;
  ;

  return 0;
}