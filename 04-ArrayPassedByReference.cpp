/*
  Arrays are Passed by Reference in C++
  --------------------------------------
  - When we pass an array to a function, it decays into a pointer to its first element
  - This means changes made to the array inside a function affect the original array
  - The array name itself acts as a pointer to the first element
*/

#include <iostream>
using namespace std;

int main()
{
  // =============================================
  // PART 1: Basic Pointer Example
  // =============================================

  int a = 10;          // Declare an integer variable 'a' with value 10
  int *ptr = &a;       // Create a pointer 'ptr' that stores the address of 'a'
  cout << ptr << endl; // Output: Memory address of 'a' (e.g., 0x61ff08)

  // =============================================
  // PART 2: Array and Pointer Relationship
  // =============================================

  int arr[] = {1, 2, 3, 4, 5}; // Declare an array with 5 elements

  // Key Concept: Array name 'arr' acts as a pointer to the first element
  cout << arr << endl; // Output: Base address of array (address of arr[0])

  // Dereferencing the array name gives the first element
  cout << *arr << endl; // Output: 1 (value at arr[0], same as *(arr + 0))

  // Pointer Arithmetic: (arr + n) moves to the nth element's address
  cout << *(arr + 1) << endl; // Output: 2 (value at arr[1])
  cout << *(arr + 2) << endl; // Output: 3 (value at arr[2])

  /*
    Summary of Pointer Arithmetic with Arrays:
    ------------------------------------------
    arr       -> Address of arr[0]
    *arr      -> Value at arr[0] = 1
    *(arr+1)  -> Value at arr[1] = 2
    *(arr+2)  -> Value at arr[2] = 3
    *(arr+n)  -> Value at arr[n]

    Note: arr[i] is equivalent to *(arr + i)
  */

  return 0;
}