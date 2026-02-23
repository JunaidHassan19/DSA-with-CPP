#include <iostream>
using namespace std;

// Kadane's Algorithm - O(n) time complexity
void maxSumSubarray(int *arr, int len)
{
  int currSum = 0;
  int maxSum = INT_MIN;

  for (int i = 0; i < len; i++)
  {
    currSum += arr[i];             // Add the current element to the current sum
    maxSum = max(maxSum, currSum); // Update the maximum sum if the current sum is greater
    if (currSum < 0)               // If the current sum becomes negative, reset it to 0
    {
      currSum = 0;
    }
  }
  cout << "Maxinum Subarray sum = " << maxSum;
}

int main()
{
  int arr[6] = {2, -3, 6, -5, 4, 2};
  int len = sizeof(arr) / sizeof(int);

  maxSumSubarray(arr, len);

  return 0;
}