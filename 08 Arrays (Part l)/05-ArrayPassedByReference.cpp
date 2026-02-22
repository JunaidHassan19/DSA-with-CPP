#include <iostream>
using namespace std;

// Function that takes an array as a parameter and modifies its first element
void fun(int arr[])
{
  arr[0] = 1000; // Modifying the first element of the array
}
// Another function that takes a pointer to an integer and modifies the value it points to
void fun2(int *ptr)
{
  ptr[0] = 1000; // Modifying the value at the address pointed to by ptr (which is the first element of the array)
}

// Function to print the elements of the array
void printArray(int nums[], int len) // The parameter 'nums' is treated as a pointer to the first element of the array
{
  // cout << sizeof(nums) << endl; // 8 = size of interger -pointer
  for (int i = 0; i < len; i++)
  {
    cout << nums[i] << ", ";
  }
  cout << endl;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int len = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array by dividing the total size of the array by the size of a single element

  // fun(arr);
  printArray(arr, len); // two parameters are passed to the function: the array 'arr' and its length 'len'. The function will print the elements of the array. Since arrays are passed by reference, any modifications made to 'arr' inside the function will affect the original array in main().
  // cout << arr[0] << endl;
  cout << "array size = " << sizeof(arr) << endl;
  return 0;
}