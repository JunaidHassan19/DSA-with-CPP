#include <iostream>
using namespace std;

// Print Subarrays
/*
// void printSubarrays(int *arr, int len)
// {
//   for (int start = 0; start < len; start++)
//   {
//     for (int end = start; end < len; end++)
//     {
//       for (int i = start; i <= end; i++)
//       {
//         cout << arr[i];
//       }
//       cout << ", ";
//     }
//     cout << endl;
//   }
// }

// void printSubarrays(int *arr, int len)
// {
//   for (int start = 0; start < len; start++)
//   {
//     for (int end = start; end < len; end++)
//     {
//       for (int i = start; i <= end; i++)
//       {
//         cout << arr[i];
//       }
//       cout << ", ";
//     }
//     cout << endl;
//   }
// }

// void printSubarrays(int *arr, int len)
// {
//   for (int start = 0; start < len; start++)
//   {
//     for (int end = start; end < len; end++)
//     {
//       for (int i = start; i <= end; i++)
//       {
//         cout << arr[i];
//       }
//       cout << ", ";
//     }
//     cout << endl;
//   }
// }

void printSubarrays(int *arr, int len)
{
  for (int start = 0; start < len; start++)
  {
    for (int end = start; end < len; end++)
    {
      for (int i = start; i <= end; i++)
      {
        cout << arr[i];
      }
      cout << ", ";
    }
    cout << endl;
  }
}
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int len = sizeof(arr) / sizeof(int);

  printSubarrays(arr, len);
  return 0;
}
*/

// max Sum Subarray - Brute Force Approach - O(n^3) time complexity
/*
// void maxSumSubarray(int *arr, int len)
// {
//   int maxSum = INT_MIN;
//   for (int start = 0; start < len; start++)
//   {
//     for (int end = start; end < len; end++)
//     {
//       int currSum = 0;
//       for (int i = start; i <= end; i++)
//       {
//         currSum += arr[i];
//       }
//       cout << currSum << ", ";
//       maxSum = max(maxSum, currSum);
//     }
//     cout << endl;
//   }
//   cout << "Maxinum Subarray sum = " << maxSum;
// }

// void maxSumSubarray(int *arr, int len)
// {
//   int maxSum = INT_MIN;
//   for (int start = 0; start < len; start++)
//   {
//     for (int end = start; end < len; end++)
//     {
//       int currSum = 0;
//       for (int i = start; i <= end; i++)
//       {
//         currSum += arr[i];
//         maxSum = max(maxSum, currSum);
//       }
//     }
//   }
//   cout << "Maxinum Subarray sum = " << maxSum;
// }

// void maxSumSubarray(int *arr, int len)
// {
//   int maxSum = INT_MIN;
//   for (int start = 0; start < len; start++)
//   {
//     for (int end = start; end < len; end++)
//     {
//       int currSum = 0;
//       for (int i = start; i <= end; i++)
//       {
//         currSum += arr[i];
//         maxSum = max(maxSum, currSum);
//       }
//     }
//   }
//   cout << "Maxinum Subarray sum = " << maxSum;
// }

void maxSumSubarray(int *arr, int len)
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
        maxSum = max(maxSum, currSum);
      }
    }
  }
  cout << " Maxinum Subarray sum = " << maxSum;
}

int main()
{
  int arr[6] = {2, -3, 6, -5, 4, 2};
  int len = sizeof(arr) / sizeof(int);

  maxSumSubarray(arr, len);
  return 0;
}
*/

// max Sum Subarray - Optimized Approach - O(n^2) time complexity
/*
// void maxSumSubset(int *arr, int len)
// {
//   int maxSum = INT_MIN;
//   for (int start = 0; start < len; start++)
//   {
//     int currSum = 0;
//     for (int end = start; end < len; end++)
//     {
//       currSum += arr[end];
//       maxSum = max(maxSum, currSum);
//     }
//   }
//   cout << "Maxinum Subarray sum = " << maxSum;
// }

// void maxSumSubset(int *arr, int len)
// {
//   int maxSum = INT_MIN;
//   for (int start = 0; start < len; start++)
//   {
//     int currSum = 0;
//     for (int end = start; end < len; end++)
//     {
//       currSum += arr[end];
//       maxSum = max(maxSum, currSum);
//     }
//   }
//   cout << "Maxinum Subarray sum = " << maxSum;
// }

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
*/

// max Sum Subarray - Kadane's Algorithm - O(n) time complexity

// void maxSumSubarray(int *arr, int len)
// {
//   int currSum = 0;
//   int maxSum = INT_MIN;
//   for (int i = 0; i < len; i++)
//   {
//     currSum += arr[i];
//     maxSum = max(maxSum, currSum);
//     if (currSum < 0)
//     {
//       currSum = 0;
//     }
//   }
//   cout << "Maxinum Subarray sum = " << maxSum;
// }

// void maxSumSubarray(int *arr, int len)
// {
//   int currSum = 0;
//   int maxSum = INT_MIN;
//   for (int i = 0; i < len; i++)
//   {
//     currSum += arr[i];
//     maxSum = max(maxSum, currSum);
//     if (currSum < 0)
//     {
//       currSum = 0;
//     }
//   }
//   cout << "Maxinum Subarray sum = " << maxSum;
// }

void maxSumSubarray(int *arr, int len)
{
  int currSum = 0;
  int maxSum = INT_MIN;
  for (int i = 0; i < len; i++)
  {
    currSum += arr[i];
    maxSum = max(maxSum, currSum);
    if (currSum < 0)
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