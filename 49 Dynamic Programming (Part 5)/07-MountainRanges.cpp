#include <iostream>
#include <vector>
using namespace std;

// Number of mountain ranges that can be formed with n pairs of upstrokes and downstrokes
int mountainRanges(int n) // tc: O(n^2) sc: O(n)
{
  vector<int> dp(n + 1, 0);
  dp[0] = dp[1] = 1;

  for (int i = 2; i <= n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      dp[i] += dp[j] * dp[i - j - 1];
    }
  }

  return dp[n];
}

int main()
{
  int pairs = 3;

  cout << mountainRanges(pairs) << endl;
  return 0;
}