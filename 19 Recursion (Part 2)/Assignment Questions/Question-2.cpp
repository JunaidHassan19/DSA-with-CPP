#include <iostream>
#include <string>
using namespace std;

/*

Question 2: For a given integer array of size N.
You have to find all the occurrences (indices) of a given element (Key) and print them.
Use a recursive function to solve this problem.
Sample Input: arr[] = {3,2,4,5,6,2,7,2,2}, key = 2
Sample Output: 1 5 7 8

*/

void allOccurences(int arr[], int key, int i, int n)
{
  if (i == n)
  {
    return;
  }
  if (arr[i] == key)
  {
    cout << i << " ";
  }
  allOccurences(arr, key, i + 1, n);
}

int main()
{
  int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
  int n = sizeof(arr) / sizeof(int);
  int key = 2;
  allOccurences(arr, key, 0, n);
  return 0;
}