#include <iostream>
using namespace std;
int main()
{
  int n = 4;
  for (int i = 0; i < n; i++) // Outer loop 0 to n - 1
  {
    for (int j = 0; j < n; j++) // Inner loop 0 to n - 1
    {
      // Check if we are on the border of the pattern
      if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
      {
        cout << "*"; // Print '*' for the border
      }
      else
      {
        cout << " "; // Print space for the inner part of the pattern
      }
    }
    cout << endl;
  }
  /*
    // Alternative approach to print the same pattern
    for (int i = 1; i <= n; i++)// Outer loop 1 to n
    {
      cout << "*";// Print the first '*' for each row
      for (int j = 1; j <= n - 1; j++)// Inner loop 1 to n - 1
      {
        if (i == 1 || i == n)// Check if we are on the first or last row
        {
          cout << "*";// Print '*' for the first and last row
        }
        else
        {
          cout << " ";
        }
      }
      cout << "*" << endl;
    }
  */
  return 0;
}

/*
Loop logic:
i = 0, j = 0 (prints '*'), j = 1 (prints '*'), j = 2 (prints '*'), j = 3 (prints '*')
i = 1, j = 0 (prints '*'), j = 1 (prints ' '), j = 2 (prints ' '), j = 3 (prints '*')
i = 2, j = 0 (prints '*'), j = 1 (prints ' '), j = 2 (prints ' '), j = 3 (prints '*')
i = 3, j = 0 (prints '*'), j = 1 (prints '*'), j = 2 (prints '*'), j = 3 (prints '*')

Output:
****
*  *
*  *
****

*/