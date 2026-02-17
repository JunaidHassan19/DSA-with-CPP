// Question 5: Write a function that accepts a character (ch) as parameters and returns the character that occurs ch in the English alphabet. Eg: input = "c", return value = "d".

#include <iostream>
using namespace std;
char nextAlpha(char ch)
{
  if (ch == 'Z') // if the input is 'Z', return 'A'
  {
    return 'A'; // return 'A' because after 'Z' comes 'A'
  }
  else
  {
    return ch + 1; // return the next character by adding 1 to the ASCII value of the input character
  }
}
int main()
{
  char ch;
  cout << "Enter a character: ";
  cin >> ch;

  cout << nextAlpha(ch);
}

/*
logic: We can use the ASCII values of characters to find the next character. The ASCII value of 'A' is 65 and the ASCII value of 'Z' is 90. So if the input character is 'Z', we return 'A'. For any other character, we can simply add 1 to its ASCII value to get the next character.
output: If the input is 'c', the output will be 'd'. If the input is 'Z', the output will be 'A'.
*/