#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  // Bacis

  char arr[5] = {'a', 'b', 'c', 'd', 'e'};
  cout << arr[0] << endl;
  cout << arr[1] << endl;
  cout << arr[2] << endl;
  cout << arr[3] << endl;
  cout << arr[4] << endl;

  char arr[5] = {'c', 'o', 'd', 'e', '\0'};
  cout << arr << endl;

  // Creation & Output.
  char work[] = "code"; // null character is automatically added at the end of the string
  cout << work << endl;
  cout << strlen(work) << endl; // prints the length of the string "code", which is 4

  char work1[5] = "code"; // null character is automatically added at the end of the string, but it exceeds the array size, which can lead to undefined behavior
  cout << work1 << endl;

  char work2[] = {'c', 'o', 'd', 'e', '\0'}; // null character is explicitly added at the end of the string
  cout << work2 << endl;

  char work3[50] = {'c', 'o', 'd', 'e', '\0'}; // null character is explicitly added at the end of the string, and the array size is sufficient to hold the string
  cout << work3 << endl;

  return 0;
}

/*
definition of char array:
- A char array is a collection of characters stored in contiguous memory locations.
- It is used to store strings in C++.
- A char array can be initialized using an initializer list (e.g., char arr[] = {'a', 'b', 'c', '\0'};) or using a string literal (e.g., char arr[] = "abc";).
- When a char array is initialized with a string literal, a null character ('\0') is automatically added at the end of the string to indicate the end of the string.
- The size of a char array can be specified explicitly (e.g., char arr[10] = "hello";) or can be determined by the compiler based on the initializer (e.g., char arr[] = "hello";).
- It is important to ensure that the char array has enough space to hold the string and the null character to avoid undefined behavior.

*/