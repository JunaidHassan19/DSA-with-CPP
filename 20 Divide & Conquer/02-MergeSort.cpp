#include <iostream>
#include <vector>
using namespace std;

// Merge two sorted arrays -time complexity O(n) and space complexity O(n)
void merge(int arr[], int si, int mid, int ei)
{
  vector<int> temp;

  int i = si;
  int j = mid + 1;

  while (i <= mid && j <= ei)
  {
    if (arr[i] <= arr[j])
    {
      temp.push_back(arr[i++]);
    }
    else
    {
      temp.push_back(arr[j++]);
    }
  }

  while (i <= mid)
  {
    temp.push_back(arr[i++]);
  }
  while (j <= ei)
  {
    temp.push_back(arr[j++]);
  }

  // copy temp to original arr
  for (int idx = si, x = 0; idx <= ei; idx++)
  {
    arr[idx] = temp[x++];
  }
}

// divide and conquer approach - time complexity O(nlogn) and space complexity O(n)
void mergeSort(int arr[], int si, int ei)
{
  if (si >= ei)
  {
    return;
  }

  int mid = (si + ei) / 2;
  // Left side
  mergeSort(arr, si, mid);

  // Right side
  mergeSort(arr, mid + 1, ei);

  merge(arr, si, mid, ei); // conquer step
}

// utility function to print the array
void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[6] = {6, 3, 7, 5, 2, 4};
  int n = 6;
  mergeSort(arr, 0, n - 1);
  printArray(arr, n);

  return 0;
}
/*
Step 1: Divide the array into two halves until we reach the base case of a single element.
Step 2: Merge the sorted halves back together in a sorted manner.
Time Complexity: O(n log n) - The array is divided log n times and each merge operation takes O(n) time.
Space Complexity: O(n) - We use a temporary array to store the merged result, which can take up to O(n) space in the worst case.

*/