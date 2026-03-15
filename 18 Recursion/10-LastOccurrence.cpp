#include <iostream>
#include <vector>
using namespace std;

// Function to find the last occurrence of a target element in an array
int lastOccurrence(vector<int> arr, int targer, int i)
{
  if (i == arr.size()) // base case: if we have reached the end of the array without finding the target
  {
    return -1;
  }
  // recursive case: check the rest of the array by making a recursive call with the next index
  int idx = lastOccurrence(arr, targer, i + 1);

  // if the target element is not found in the rest of the array and the current element is equal to the target, return the index
  if (idx == -1 && arr[i] == targer)
  {
    return i;
  }
  return idx;
}

int main()
{
  vector<int> arr = {1, 2, 3, 3, 3, 4};
  int target = 3;
  cout << lastOccurrence(arr, target, 0);
  return 0;
}
/*
logic:
1. The function `lastOccurrence` takes a vector `arr`, an integer `target`, and an index `i` as input.
2. It checks if `i` is equal to the size of the array, which means we have reached the end of the array without finding the target. If so, it returns -1 to indicate that the target element is not found in the array.
3. It makes a recursive call to `lastOccurrence` with the next index `i + 1` to check the rest of the array and stores the result in variable `idx`.
4. If `idx` is -1, which means the target element is not found in the rest of the array, and the current element `arr[i]` is equal to the target, it returns the index `i`, which is the index of the last occurrence of the target element in the array.
5. If neither of the above conditions is met, it returns `idx`, which is the result of the recursive call, indicating the index of the last occurrence of the target element in the array.
*/