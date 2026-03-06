#include <iostream>
using namespace std;

// Bubble Sort Algorithm
void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    bool isSorted = false;
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      // if (arr[j] < arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        isSorted = true;
      }
    }
    if (!isSorted)
      return;
  }
  print(arr, n);
}

int main()
{
  int arr[] = {5, 4, 1, 3, 2};
  // int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);

  bubbleSort(arr, n);
  return 0;
}

/*
logic:
1. Compare adjacent elements and swap them if they are in the wrong order.
2. After the first pass, the largest element will be at the end of the array.
3. Repeat the process for the remaining unsorted elements until the entire array is sorted.
Time Complexity: O(n^2) in the worst and average cases, O(n) in the best case (when the array is already sorted).
Space Complexity: O(1) (in-place sorting algorithm).


*/