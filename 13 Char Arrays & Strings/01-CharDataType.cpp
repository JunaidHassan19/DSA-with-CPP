#include <iostream>
using namespace std;

int main()
{
  char ch = 'a';
  char ch1 = 'b';
  char ch2 = 'J';
  char ch3 = 'S';
  char ch4 = '$';
  char ch5 = '*';
  char ch6 = '\n'; // newline character

  cout << ch3 << endl;      // prints S
  cout << (int)ch3 << endl; // prints 83, the ASCII value of 'S'

  int pos = ch3 - 'A'; // calculates the position of 'S' in the alphabet (0-based index), which is 18
  cout << pos << endl; // prints 18

  return 0;
}

/*
definition of char data type:
- char is a built-in data type in C++ that represents a single character.
- It is typically used to store characters such as letters, digits, and symbols.
- A char variable can hold a single character enclosed in single quotes (e.g., 'a', 'b', 'J', etc.).
- The char data type is usually 1 byte in size and can represent 256 different characters (0 to 255) using the ASCII character encoding.
- The char data type can also be used to store special characters using escape sequences (e.g., '\n' for newline, '\t' for tab, etc.).

*/