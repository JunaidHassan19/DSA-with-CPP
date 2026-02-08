/*
  Output in C++
  --------------
  We use 'cout' (Console Output) to display output on the screen.
  cout is defined in the <iostream> header file.

  Syntax:  cout << "text" << variable;

  Key Points:
  • << is the insertion operator (puts data into output stream)
  • endl or '\n' moves cursor to a new line
  • We can chain multiple << operators together
*/

#include <iostream>
using namespace std;

int main()
{
  // 1. Basic text output
  cout << "Hello, World!" << endl;

  // 2. Output with new line using endl
  cout << "Welcome to C++ Programming" << endl;
  cout << "This is the Sigma Batch" << endl;

  // 3. Output with new line using \n (escape character)
  cout << "Line 1\n";
  cout << "Line 2\n";
  cout << "Line 3\n";

  // 4. Multiple outputs in one statement
  cout << "One " << "Two " << "Three" << endl;

  // 5. Printing variables
  int age = 20;
  string name = "Junni";
  float marks = 95.5f;

  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
  cout << "Marks: " << marks << endl;

  // 6. Combining text and variables
  cout << name << " is " << age << " years old and scored " << marks << " marks." << endl;

  // 7. Printing special characters using escape sequences
  cout << "\n--- Escape Sequences ---" << endl;
  cout << "Tab:\tHello" << endl;          // \t = tab
  cout << "New Line:\nNext Line" << endl; // \n = new line
  cout << "Backslash: \\" << endl;        // \\ = backslash
  cout << "Quote: \"Hello\"" << endl;     // \" = double quote

  return 0;
}
