#include <iostream>
using namespace std;

int main()
{
  int n = 5;
  for (int i = 1; i <= n; i++) // Outer loop 1 to n
  {
    for (int j = 1; j <= n - i; j++) // Inner loop 1 to n - i
    {
      cout << " "; // Print space for the left padding of the pattern
    }
    for (int k = 1; k <= i; k++) // Inner loop 1 to i
    {
      cout << "*"; // Print '*' for the right part of the pattern
    }
    cout << endl;
  }
  return 0;
}
/*
Loop logic:
i = 1, j = 1 (prints ' '), j = 2 (prints ' '), j = 3 (prints ' '), j = 4 (prints ' '), k = 1 (prints '*')
i = 2, j = 1 (prints ' '), j = 2 (prints ' '), j = 3 (prints ' '), j = 4 (prints ' '), k = 1 (prints '*'), k = 2 (prints '*')
i = 3, j = 1 (prints ' '), j = 2 (prints ' '), j = 3 (prints ' '), j = 4 (prints ' '), k = 1 (prints '*'), k = 2 (prints '*'), k = 3 (prints '*')
i = 4, j = 1 (prints ' '), j = 2 (prints ' '), j = 3 (prints ' '), j = 4 (prints ' '), k = 1 (prints '*'), k = 2 (prints '*'), k = 3 (prints '*'), k = 4 (prints '*')
i = 5, j = 1 (prints ' '), j = 2 (prints ' '), j = 3 (prints ' '), j = 4 (prints ' '), k = 1 (prints '*'), k = 2 (prints '*'), k = 3 (prints '*'), k = 4 (prints '*'), k = 5 (prints '*')

Output:
    *
   **
  ***
 ****
*/