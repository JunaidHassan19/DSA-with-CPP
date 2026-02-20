#include <iostream>
using namespace std;

int main()
{
  // ============ 3 Ways to Create an Array ============

  // Type 1: Declare with size and initialize with values
  int marks[5] = {85, 90, 78, 92, 88};

  // Type 2: Declare without size (compiler counts automatically)
  int numbers[] = {10, 20, 30, 40}; // size = 4

  // Type 3: Declare with size, assign values later
  int ages[3];
  ages[0] = 18;
  ages[1] = 20;
  ages[2] = 22;

  // ============ Printing Array Elements ============
  // Array index starts from 0
  cout << "marks[0] = " << marks[0] << endl;
  cout << "marks[1] = " << marks[1] << endl;
  cout << "marks[2] = " << marks[2] << endl;
  cout << "marks[3] = " << marks[3] << endl;
  cout << "marks[4] = " << marks[4] << endl;

  // ============ Size of Array ============
  // sizeof(array) gives total bytes
  // sizeof(array[0]) gives bytes of one element
  // Total elements = sizeof(array) / sizeof(array[0])

  cout << "Total bytes of array: " << sizeof(marks) << endl;
  cout << "Bytes of one element: " << sizeof(marks[0]) << endl;
  cout << "Number of elements: " << sizeof(marks) / sizeof(marks[0]) << endl;

  return 0;
}
