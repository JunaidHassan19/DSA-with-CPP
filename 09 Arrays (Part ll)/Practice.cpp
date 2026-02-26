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
//   cout << " Maxinum Subarray sum = " << maxSum;
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
      }
      cout << currSum << ", ";
      maxSum = max(maxSum, currSum);
    }
    cout << endl;
  }
  cout << "Max subsrray sum = " << maxSum;
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
  cout << "Max Subarrray Sum = " << maxSum;
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
/*
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
  cout << "Max subarray Sum = " << maxSum;
}

int main()
{
  int arr[6] = {2, -3, 6, -5, 4, 2};
  int len = sizeof(arr) / sizeof(int);

  maxSumSubarray(arr, len);

  return 0;
}
*/

// Given an array of stock prices, find the maximum profit that can be made by buying and selling a single stock. You must buy before you sell.
/*
// void maxProfit(int *prices, int len)
// {
//   int bestBuy[10000];
//   bestBuy[0] = INT_MAX;
//   for (int i = 1; i < len; i++)
//   {
//     bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
//   }
//   int maxProfit = 0;
//   for (int i = 0; i < len; i++)
//   {
//     int currProfit = prices[i] - bestBuy[i];
//     maxProfit = max(maxProfit, currProfit);
//   }
//   cout << "Max Profit = " << maxProfit;
// }

// void maxProfit(int *prices, int len)
// {
//   int bestBuy[10000];
//   bestBuy[0] = INT_MAX;
//   for (int i = 1; i < len; i++)
//   {
//     bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
//   }
//   int maxProfit = 0;
//   for (int i = 0; i < len; i++)
//   {
//     int currProfit = prices[i] - bestBuy[i];
//     maxProfit = max(maxProfit, currProfit);
//   }
//   cout << "Max Profit = " << maxProfit;
// }

// void maxProfit(int *prices, int len)
// {
//   int bestBuy[10000];
//   bestBuy[0] = INT_MAX;
//   for (int i = 1; i < len; i++)
//   {
//     bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
//   }
//   int maxProfit = 0;
//   for (int i = 0; i < len; i++)
//   {
//     int currprofit = prices[i] - bestBuy[i];
//     maxProfit = max(maxProfit, currprofit);
//   }
//   cout << "Max Profit = " << maxProfit;
// }

void maxProfit(int *prices, int len)
{
  int bestBuy[10000];
  bestBuy[0] = INT_MAX;

  for (int i = 1; i < len; i++)
  {
    bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
  }
  int maxProfit = 0;
  for (int i = 0; i < len; i++)
  {
    int currProfit = prices[i] - bestBuy[i];
    maxProfit = max(maxProfit, currProfit);
  }
  cout << "Max Profit = " << maxProfit;
}

int main()
{
  int prices[6] = {7, 1, 5, 3, 6, 4};
  int len = sizeof(prices) / sizeof(int);

  maxProfit(prices, len);
  return 0;
}
*/

// Function to calculate the amount of water trapped.

// int trappingRainwater(int *heights, int len)
// {
//   int leftMax[20000];
//   int rightMax[20000];
//   leftMax[0] = heights[0];
//   rightMax[len - 1] = heights[len - 1];
//   for (int i = 1; i < len; i++)
//   {
//     leftMax[i] = max(leftMax[i - 1], heights[i - 1]);
//   }
//   for (int i = len - 2; i >= 0; i--)
//   {
//     rightMax[i] = max(rightMax[i + 1], heights[i + 1]);
//   }
//   int waterTrapped = 0;
//   for (int i = 0; i < len; i++)
//   {
//     int currWater = min(leftMax[i], rightMax[i]) - heights[i];
//     if (currWater > 0)
//     {
//       waterTrapped += currWater;
//     }
//   }
//   return waterTrapped;
// }

// int trappingRainwater(int *heights, int len)
// {
//   int leftMax[20000];
//   int rightMax[20000];
//   leftMax[0] = heights[0];
//   rightMax[len - 1] = heights[len - 1];
//   for (int i = 1; i < len; i++)
//   {
//     leftMax[i] = max(leftMax[i - 1], heights[i - 1]);
//   }
//   for (int i = len - 2; i >= 0; i--)
//   {
//     rightMax[i] = max(rightMax[i + 1], heights[i + 1]);
//   }
//   int trappedWater = 0;
//   for (int i = 0; i < len; i++)
//   {
//     int currWater = min(leftMax[i], rightMax[i]) - heights[i];
//     if (currWater > 0)
//     {
//       trappedWater += currWater;
//     }
//   }
//   return trappedWater;
// }

// int trappingRainwater(int *heights, int len)
// {
//   int leftMax[20000];
//   int rightMax[20000];
//   leftMax[0] = heights[0];
//   rightMax[len - 1] = heights[len - 1];
//   for (int i = 1; i < len; i++)
//   {
//     leftMax[i] = max(leftMax[i - 1], heights[i - 1]);
//   }
//   for (int i = len - 2; i >= 0; i--)
//   {
//     rightMax[i] = max(rightMax[i + 1], heights[i + 1]);
//   }
//   int trappedWater = 0;
//   for (int i = 0; i < len; i++)
//   {
//     int currWater = min(leftMax[i], rightMax[i]) - heights[i];
//     if (currWater > 0)
//     {
//       trappedWater += currWater;
//     }
//   }
//   return trappedWater;
// }

int trappingRainwater(int *heights, int len)
{
  int leftMax[20000];
  int rightMax[20000];
  leftMax[0] = heights[0];
  rightMax[len - 1] = heights[len - 1];

  for (int i = 1; i < len; i++)
  {
    leftMax[i] = max(leftMax[i - 1], heights[i - 1]);
  }
  for (int i = len - 2; i >= 0; i--)
  {
    rightMax[i] = max(rightMax[i + 1], heights[i + 1]);
  }
  int waterTrapped = 0;
  for (int i = 0; i < len; i++)
  {
    int currWater = min(leftMax[i], rightMax[i]) - heights[i];
    if (currWater > 0)
    {
      waterTrapped += currWater;
    }
  }
  return waterTrapped;
}

int main()
{
  int heights[7] = {4, 2, 0, 6, 3, 2, 5};
  int len = sizeof(heights) / sizeof(int);

  cout << "Trapping Rainwater =  " << trappingRainwater(heights, len);

  return 0;
}
