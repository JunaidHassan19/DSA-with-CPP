#include <iostream>
using namespace std;
// Optimized Approach - O(n^2) time complexity
void maxSumSubset(int *arr, int len)
{
  int maxSum = INT_MIN;
  for (int start = 0; start < len; start++)
  {
    int currSum = 0;
    for (int end = start; end < len; end++)
    {
      currSum += arr[end];
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

  maxSumSubset(arr, len);

  return 0;
}