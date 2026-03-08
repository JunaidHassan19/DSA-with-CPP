#include <iostream>
using namespace std;

int main()
{
  int size;
  cout << "Enter the size of Array: ";
  cin >> size;

  int *arr = new int[size];

  int x = 1;
  for (int i = 0; i < size; i++)
  {
    arr[i] = x;
    cout << arr[i] << " ";
    x++;
  }
  cout << endl;

  return 0;
}
/*

  brief Program to demonstrate dynamic array creation and initialization

  description
  This program demonstrates how to create a dynamic array at runtime.
  A dynamic array is allocated on the heap using the 'new' operator,
  allowing the size to be determined during program execution rather
  than at compile time.

  process
  1. Prompts user to enter the desired array size
  2. Allocates memory for an integer array of the specified size on the heap
  3. Initializes array elements with sequential values starting from 1
  4. Displays all array elements
  5. Program terminates (note: should ideally use delete[] to free memory)

  note
  Memory allocated with 'new' should be freed using 'delete[]' to prevent
  memory leaks. Add 'delete[] arr;' before returning from main.

  example
  Enter the size of Array: 5
  Output: 1 2 3 4 5
 */