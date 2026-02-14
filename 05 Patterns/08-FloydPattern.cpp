#include <iostream>
using namespace std;

int main()
{
  int n = 4;
  int num = 1;                 // Initialize the number to be printed starting from 1
  for (int i = 1; i <= n; i++) // Outer loop 1 to n
  {
    for (int j = 1; j <= i; j++) // Inner loop 1 to i
    {
      cout << num << " "; // Print the current number followed by a space
      num++;              // Increment the number for the next print
    }
    cout << endl;
  }
  return 0;
}

/*
Loop logic:
i = 1, j = 1 (prints '1', num becomes 2)
i = 2, j = 1 (prints '2', num becomes 3), j = 2 (prints '3', num becomes 4)
i = 3, j = 1 (prints '4', num becomes 5), j = 2 (prints '5', num becomes 6), j = 3 (prints '6', num becomes 7)
i = 4, j = 1 (prints '7', num becomes 8), j = 2 (prints '8', num becomes 9), j = 3 (prints '9', num becomes 10), j = 4 (prints '10', num becomes 11)
Output:
1
2 3
4 5 6
7 8 9 10

*/