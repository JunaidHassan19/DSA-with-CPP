#include <iostream>
using namespace std;
// Maximum Subarray Sum - Brute Force Approach - O(n^3) time complexity
void maxSubarraySum(int *arr, int len)
{
  int maxSum = INT_MIN;
  for (int start = 0; start < len; start++)
  {
    for (int end = start; end < len; end++)
    {
      int currSum = 0;
      for (int i = start; i <= end; i++)
      {
        currSum += arr[i];
      }
      cout << currSum << ",";
      maxSum = max(maxSum, currSum);
    }
    cout << endl;
  }
  cout << "Maxinum Subarray sum = " << maxSum;
}

int main()
{
  int arr[6] = {2, -3, 6, -5, 4, 2};
  int len = sizeof(arr) / sizeof(int);

  maxSubarraySum(arr, len);
  return 0;
}