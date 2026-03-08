
#include <iostream>
using namespace std;

void func()
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
  delete[] arr;
}
int main()
{
  func();

  return 0;
}
// ========================================================
//  Dynamic Memory Allocation in C++
// ========================================================
//
//  Memory is divided into two parts:
//    1. Stack Memory  — allocated at compile time (static)
//    2. Heap Memory   — allocated at run time (dynamic)
//
//  Why Dynamic Memory Allocation?
//  - When we don't know the size of data at compile time.
//  - Stack has limited size; heap is much larger.
//  - We can allocate & deallocate memory as needed.
//
//  Keywords:
//    new     → allocates memory on the heap, returns a pointer.
//    delete  → frees the allocated memory.
//
//  Syntax:
//    int *ptr = new int;          // single variable
//    int *arr = new int[size];    // array of 'size' elements
//
//    delete ptr;       // free single variable
//    delete[] arr;     // free array
//
//  Important:
//  - Always use delete/delete[] after new/new[] to avoid memory leaks.
//  - Memory allocated with new stays until we explicitly delete it
//    (it does NOT get freed when the function ends).
//
// ========================================================