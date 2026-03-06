#include <iostream>
using namespace std;

// Insertion Sort Algorithm
void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

void insertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int curr = arr[i];
    int prev = i - 1;
    while (prev >= 0 && arr[prev] > curr)
    {
      swap(arr[prev], arr[prev + 1]);
      prev--;
    }
    arr[prev + 1] = curr;
  }
  print(arr, n);
}

int main()
{
  int arr[] = {5, 4, 1, 3, 2};
  int n = sizeof(arr) / sizeof(int);

  insertionSort(arr, n);
  return 0;
}

/*
logic:
1. Start from the second element (index 1) and compare it with the elements before it.
2. If the current element is smaller than the previous elements, shift the larger elements one position to the right.
3. Insert the current element into its correct position in the sorted part of the array.
Time Complexity: O(n^2) in the worst and average cases, O(n) in the best case (when the array is already sorted).
Space Complexity: O(1) (in-place sorting algorithm).
*/