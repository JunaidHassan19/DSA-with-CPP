#include <iostream>
using namespace std;

int main()
{
  int n = 7;
  // Upper half of the diamond
  for (int i = 1; i <= n; i++) // Outer loop 1 to n
  {
    for (int j = 1; j <= n - i; j++) // Inner loop 1 to n-i
    {
      cout << " "; // Print spaces to center the stars
    }
    for (int j = 1; j <= 2 * i - 1; j++) // Inner loop 1 to 2*i-1
    {
      cout << "*"; // Print stars to form the upper half of the diamond
    }
    cout << endl;
  }
  // Lower half of the diamond
  for (int i = n; i >= 1; i--) // Outer loop n to 1
  {
    for (int j = 1; j <= n - i; j++) // Inner loop 1 to n-i
    {
      cout << " "; // Print spaces to center the stars
    }
    for (int j = 1; j <= 2 * i - 1; j++) // Inner loop 1 to 2*i-1
    {
      cout << "*"; // Print stars to form the lower half of the diamond
    }
    cout << endl;
  }

  return 0;
}

/*
Code logic:
1. The first loop (i = 1 to n) generates the upper half of the diamond. For each row, it first prints spaces to center the stars, then prints the appropriate number of stars (2*i - 1) to form the upper half.
2. The second loop (i = n to 1) generates the lower half of the diamond. It follows the same logic as the first loop but in reverse order, starting from n down to 1, to create the lower half of the diamond.
Output:
      *
     ***
    *****
   *******
  *********
 ***********
  *********
   *******
    *****
     ***
      *
*/