#include <iostream>
using namespace std;

int main()
{
  int n = 4;
  // Upper half of the butterfly
  for (int i = 1; i <= n; i++) // Outer loop 1 to n
  {
    for (int j = 1; j <= i; j++) // Inner loop 1 to i
    {
      cout << "*"; // Print stars for the left wing of the butterfly
    }
    for (int j = 1; j <= 2 * (n - i); j++) // Inner loop 1 to 2*(n-i)
    {
      cout << " "; // Print spaces to create the gap between the wings of the butterfly
    }

    for (int j = 1; j <= i; j++) // Inner loop 1 to i
    {
      cout << "*"; // Print stars for the right wing of the butterfly
    }
    cout << endl;
  }
  // Lower half of the butterfly
  for (int i = n; i >= 1; i--) // Outer loop n to 1
  {
    for (int j = 1; j <= i; j++) // Inner loop 1 to i
    {
      cout << "*"; // Print stars for the left wing of the butterfly
    }
    for (int j = 1; j <= 2 * (n - i); j++) // Inner loop 1 to 2*(n-i)
    {
      cout << " "; // Print spaces to create the gap between the wings of the butterfly
    }

    for (int j = 1; j <= i; j++) // Inner loop 1 to i
    {
      cout << "*"; // Print stars for the right wing of the butterfly
    }
    cout << endl;
  }

  return 0;
}

/*
Loop logic:
1. The first loop (i = 1 to n) generates the upper half of the butterfly. For each row, it first prints stars for the left wing, then prints spaces to create the gap between the wings, and finally prints stars for the right wing.
2. The second loop (i = n to 1) generates the lower half of the butterfly. It follows the same logic as the first loop but in reverse order, starting from n down to 1, to create the lower half of the butterfly.
Output:
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/