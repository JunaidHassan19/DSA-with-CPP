#include <iostream>
using namespace std;
// Selection Sort Algorithm
void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int minIdx = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[minIdx])
      {
        swap(arr[j], arr[minIdx]);
      }
    }
  }
  print(arr, n);
}

int main()
{
  int arr[] = {5, 4, 1, 3, 2};
  int n = sizeof(arr) / sizeof(int);

  selectionSort(arr, n);
  return 0;
}

/*
logic:
1. Find the minimum element in the unsorted part of the array.
2. Swap the minimum element with the first element of the unsorted part.
3. Repeat the process for the remaining unsorted elements until the entire array is sorted.
Time Complexity: O(n^2) in all cases (worst, average, and best).
Space Complexity: O(1) (in-place sorting algorithm).
*/