#include <iostream>
using namespace std;
// Pointer Arithmetic
int main()
{
  int arr[20] = {1, 2, 3, 4, 5, 6}; // rest of the elements will be initialized to 0
  int *ptr1 = arr;                  // ptr1 is pointing to the first element of arr
  int *ptr2 = ptr1 + 3;             // ptr2 is pointing to the 4th element of arr

  cout << (ptr2 > ptr1) << endl;     // output: 1 (true)
  cout << (ptr2 < ptr1) << endl;     // output: 0 (false)
  cout << (ptr1 == arr) << endl;     // output: 1 (true)
  cout << (ptr2 == arr + 3) << endl; // output: 1 (true)

  return 0;
}