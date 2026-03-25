#include <iostream>
#include <algorithm>
using namespace std;

// Search in a rotated sorted array
int search(int arr[], int si, int ei, int tar)
{
  if (si > ei)
  {
    return -1;
  }
  int mid = si + (ei - si) / 2;
  if (arr[mid] == tar)
  {

    return mid;
  }

  if (arr[si] <= arr[mid]) // l1
  {
    if (arr[si] <= tar && tar <= arr[mid])
    {
      // left half
      return search(arr, si, mid - 1, tar);
    }
    else
    {
      // Right half
      return search(arr, mid + 1, ei, tar);
    }
  }
  else // L2
  {
    if (arr[mid] <= tar && tar <= arr[ei])
    {
      // right half
      return search(arr, mid + 1, ei, tar);
    }
    else
    {
      // left half
      return search(arr, si, mid - 1, tar);
    }
  }
}

int main()
{
  int arr[7] = {4, 5, 6, 7, 0, 1, 2};
  int n = 7;

  cout << "Idx = " << search(arr, 0, n - 1, 0) << endl;
  return 0;
}

/*
Step 1: Find the mid element of the array
Step 2: If the mid element is the target element, return the mid index
Step 3: Determine which half of the array is sorted
Step 4: Check if the target element lies within the sorted half
Step 5: Recursively search in the appropriate half
Time complexity: O(log n) in the average and best case, O(n) in the worst case (when the array is not rotated)
Space complexity: O(log n) due to recursive stack space in the average and best case, O(n) in the worst case (when the array is not rotated)
*/