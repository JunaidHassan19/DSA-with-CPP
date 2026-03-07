#include <iostream>
#include <algorithm> // for sort() function
using namespace std;

// In-built Sort Algorithm
void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
  int n = sizeof(arr) / sizeof(int);
  // 1st parameter - starting address of the array
  // 2nd parameter - address of the element just after the last element of the array
  sort(arr, arr + n);
  sort(arr + 2, arr + 5); // for sorting a subarray from index 2 to index 4 (inclusive)

  //  sort(arr, arr + n, greater<int>()); // for sorting in descending order
  sort(arr, arr + n, greater<int>());

  print(arr, n);
  return 0;
}

/*
logic:
1. The sort() function from the <algorithm> library is used to sort the elements of the array. It takes two parameters: the starting address of the array and the address of the element just after the last element of the array.
2. The sort() function uses the IntroSort algorithm, which is a hybrid sorting algorithm that combines QuickSort, HeapSort, and Insertion Sort. It starts with QuickSort and switches to HeapSort when the recursion depth exceeds a certain level, and uses Insertion Sort for small subarrays.
Time Complexity: O(n log n) on average and in the worst case, and O(n) in the best case (when the array is already sorted).
Space Complexity: O(log n) on average and in the worst case due to recursive calls, and O(1) in the best case (when the array is already sorted).
*/