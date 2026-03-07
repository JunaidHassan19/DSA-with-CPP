#include <iostream>
using namespace std;

int main()
{
  // For Word Input
  char arr[10];
  cin >> arr; // This will read a word (up to the first whitespace) into the char array 'arr'
  cout << "Your word was: " << arr << endl;

  // For Sentence Input
  char sectence[30];
  cin.getline(sectence, 30); // This will read a line of text (up to 29 characters plus the null terminator) into the char array 'sectence'

  cout << "Your sentence was: " << sectence << endl;
  return 0;
}
/*
- To read input into a char array, you can use the 'cin' object for word input and the 'cin.getline()' function for sentence input.
- The 'cin' object reads input until it encounters whitespace (space, tab, or newline), making it suitable for reading single words into a char array.
- The 'cin.getline()' function reads an entire line of input, including spaces, until it reaches the specified limit (the size of the char array) or a newline character. It also automatically adds a null character ('\0') at the end of the string.
- When using 'cin.getline()', you need to specify the size of the char array to ensure that it can hold the input string and the null character to avoid buffer overflow and undefined behavior.
*/