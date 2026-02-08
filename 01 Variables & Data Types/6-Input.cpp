/*
  Input in C++
  -------------
  We use 'cin' (Console Input) to take input from the user.
  cin is defined in the <iostream> header file.

  Syntax:  cin >> variable;

  Key Points:
  • >> is the extraction operator (extracts data from input stream)
  • cin stops reading at whitespace (space, tab, newline)
  • For full line input with spaces, use getline()
  • Always declare the variable before using cin
*/

#include <iostream>
using namespace std;

int main()
{
  // 1. Taking integer input
  int age;
  cout << "Enter your age: ";
  cin >> age;
  cout << "Your age is: " << age << endl;

  // 2. Taking floating-point input
  float marks;
  cout << "Enter your marks: ";
  cin >> marks;
  cout << "Your marks: " << marks << endl;
  return 0;
}
