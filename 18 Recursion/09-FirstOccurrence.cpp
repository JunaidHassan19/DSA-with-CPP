#include <iostream>
#include <vector>
using namespace std;

// Function to find the first occurrence of a target element in an array
int firstOccurrence(vector<int> arr, int target, int i)
{
  if (i == arr.size()) // base case: if we have reached the end of the array without finding the target
  {
    return -1; // return -1 to indicate that the target element is not found in the array
  }

  if (arr[i] == target) // recursive case: if the current element is equal to the target, return the index
  {
    return i; // return the index of the first occurrence of the target element in the array
  }
  return firstOccurrence(arr, target, i + 1); // recursive case: check the rest of the array by making a recursive call with the next index
}

int main()
{
  vector<int> arr = {1, 2, 3, 3, 3, 4};
  int target = 3;

  cout << firstOccurrence(arr, target, 0);
  return 0;
}

/*
logic:
1. The function `firstOccurrence` takes a vector `arr`, an integer `target`, and an index `i` as input.
2. It checks if `i` is equal to the size of the array, which means we have reached the end of the array without finding the target. If so, it returns -1 to indicate that the target element is not found in the array.
3. If the current element `arr[i]` is equal to the target, it returns the index `i`, which is the index of the first occurrence of the target element in the array.
4. If neither of the above conditions is met, it makes a recursive call to `firstOccurrence` with the next index `i + 1` to check the rest of the array.
*/