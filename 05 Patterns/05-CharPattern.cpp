#include <iostream>
using namespace std;
int main()
{
  int n = 4;
  char ch = 'A';               // Initialize the character to 'A'
  for (int i = 0; i <= n; i++) // Outer loop 0 to n
  {
    for (int j = 0; j <= i; j++) // Inner loop 0 to i
    {
      cout << ch; // Print the current character
      ch++;       // Increment the character to the next one in the ASCII sequence
    }
    cout << endl;
  }
  return 0;
}

/*
Loop logic:
i = 0, j = 0 (prints 'A', ch becomes 'B')
i = 1, j = 0 (prints 'B', ch becomes 'C'), j = 1 (prints 'C', ch becomes 'D')
i = 2, j = 0 (prints 'D', ch becomes 'E'), j = 1 (prints 'E', ch becomes 'F'), j = 2 (prints 'F', ch becomes 'G')
i = 3, j = 0 (prints 'G', ch becomes 'H'), j = 1 (prints 'H', ch becomes 'I'), j = 2 (prints 'I', ch becomes 'J'), j = 3 (prints 'J', ch becomes 'K')
i = 4, j = 0 (prints 'K', ch becomes 'L'), j = 1 (prints 'L', ch becomes 'M'), j = 2 (prints 'M', ch becomes 'N'), j = 3 (prints 'N', ch becomes 'O'), j = 4 (prints 'O', ch becomes 'P')


output:
A
B C
D E F
G H I J
*/