#include <iostream>
#include <algorithm>
using namespace std;

// Quick sort

// Partition function - time complexity O(n) and space complexity O(1)
int partition(int arr[], int si, int ei)
{
  int i = si - 1;
  int pivot = arr[ei];
  for (int j = si; j < ei; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  i++;
  swap(arr[i], arr[ei]);
  return i;
}

// Quick sort function - time complexity O(nlogn) and space complexity O(logn) on average and O(n) in worst case
void quickSort(int arr[], int si, int ei)
{
  if (si >= ei)
  {
    return;
  }
  int pivotIdx = partition(arr, si, ei);
  quickSort(arr, si, pivotIdx - 1);
  quickSort(arr, pivotIdx + 1, ei);
}

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
  int arr[6] = {9, 3, 1, 5, 2, 8};
  int n = 6;
  quickSort(arr, 0, n - 1);

  printArray(arr, n);
  return 0;
}

/*
step 1: choose a pivot element (here we are choosing the last element as pivot)
step 2: partition the array such that all elements less than or equal to the pivot are on the left side and all elements greater than the pivot are on the right side
step 3: recursively apply the above steps to the left and right subarrays until the base case of a single element is reached
step 4: the array is now sorted
*/