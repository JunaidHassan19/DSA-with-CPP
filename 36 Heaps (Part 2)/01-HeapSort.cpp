#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Heap Sort Algorithm -TC: O(n log n) - SC: O(1)
void heapify(int i, vector<int> &arr, int n)
{
  int left = 2 * i + 1;
  int right = 2 * i + 2;
  int maxI = i;

  // Compare with left child and find the maximum element
  //  ">" is used to sort in descending order, for ascending order use "<"
  if (left < n && arr[left] > arr[maxI])
  {
    maxI = left;
  }

  // Compare with right child and find the maximum element
  //  ">" is used to sort in descending order, for ascending order use "<"
  if (right < n && arr[right] > arr[maxI])
  {
    maxI = right;
  }

  // If the maximum element is not the current element, swap and heapify
  if (maxI != i)
  {
    swap(arr[i], arr[maxI]);
    heapify(maxI, arr, n);
  }
}

// Main function to perform heap sort
void heapSort(vector<int> &arr)
{
  int n = arr.size();

  // Build a max heap from the input array
  for (int i = n / 2 - 1; i >= 0; i--)
  {
    heapify(i, arr, n);
  }

  // One by one extract elements from the heap and place them at the end of the array
  for (int i = n - 1; i >= 0; i--)
  {
    swap(arr[0], arr[i]);
    heapify(0, arr, i);
  }
}

int main()
{
  vector<int> arr = {1, 4, 2, 5, 3};
  heapSort(arr);

  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}