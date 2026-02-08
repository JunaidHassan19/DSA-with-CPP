/*
  Variables in C++
  -----------------
  A variable is a named container (memory location) that stores a value
  which can be changed during program execution.

  Syntax:  dataType variableName = value;

  Rules for naming variables:
    1. Can contain letters, digits, and underscores (_).
    2. Must begin with a letter or underscore (not a digit).
    3. Cannot use C++ reserved keywords (int, return, class, etc.).
    4. Variable names are case-sensitive (age ≠ Age).

  Common Data Types:
    int     -> stores integers           (e.g., 10, -3)
    float   -> stores decimals (32-bit)  (e.g., 3.14f)
    double  -> stores decimals (64-bit)  (e.g., 3.14159)
    char    -> stores a single character  (e.g., 'A')
    bool    -> stores true or false
    string  -> stores text (needs <string> header or iostream)
*/

#include <iostream>
using namespace std;

int main()
{
  // Integer variable
  int a = 10;
  int b = 20;

  // Floating-point variables
  float pi = 3.14f;
  double gravity = 9.81;

  // Character variable
  char grade = 'A';

  // Boolean variable
  bool isPassed = true;

  // String variable
  string name = "Sigma";

  // Printing all variables
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "pi = " << pi << endl;
  cout << "gravity = " << gravity << endl;
  cout << "grade = " << grade << endl;
  cout << "isPassed = " << isPassed << endl;
  cout << "name = " << name << endl;

  return 0;
}