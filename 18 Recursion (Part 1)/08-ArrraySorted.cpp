#include <iostream>
using namespace std;

// Function to check if an array is sorted in ascending order
bool isSorted(int arr[], int n, int i)
{
  if (i == n - 1) // base case: if we have reached the end of the array
  {
    cout << "Array is sorted." << endl;
    return true;
  }
  if (arr[i] > arr[i + 1]) // recursive case: if the current element is greater than the next element, the array is not sorted
  {
    cout << "Array is not sorted." << endl;
    return false;
  }
  return isSorted(arr, n, i + 1); // recursive case: check the rest of the array
}

int main()
{
  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[5] = {1, 3, 2, 5, 4};

  cout << isSorted(arr1, 5, 0) << endl; // Output: 1 (true)
  cout << isSorted(arr2, 5, 0) << endl; // Output: 0 (false)
  return 0;
}

/*
Logic:
1. The function `isSorted` takes an array `arr`, its size `n`, and an index `i` as input.
2. It checks if `i` is equal to `n - 1`, which means we have reached the end of the array. If so, it prints "Array is sorted." and returns true.
3. If the current element `arr[i]` is greater than the next element `arr[i + 1]`, it means the array is not sorted. In this case, it prints "Array is not sorted." and returns false.
4. If neither of the above conditions is met, it makes a recursive call to `isSorted` with the next index `i + 1` to check the rest of the array.
*/