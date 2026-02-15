/*
Question 1: Print the 0-1 Triangle Pattern.
For n = 5
1
01
101
0101
10101
*/

#include <iostream>
using namespace std;

int main()
{
  int n = 4;
  for (int i = 1; i <= n; i++) // outer loop for rows
  {
    for (int j = 1; j <= i; j++) // inner loop for columns
    {
      if ((i + j) % 2 == 0) // if the sum of row and column number is even, print 1
      {
        cout << "1";
      }
      else // if the sum of row and column number is odd, print 0
      {
        cout << "0";
      }
    }
    cout << endl;
  }
  return 0;
}

/*
Logic:
1. We have an outer loop that runs from 1 to n, which represents the numberof rows in the triangle.
2. Inside the outer loop, we have an inner loop that runs from 1 to i, which represents the number of columns in each row.
3. We check if the sum of the current row number (i) and column number (j) is even or odd.
   - If the sum is even, we print "1".
    - If the sum is odd, we print "0".
4. After the inner loop completes for each row, we print a newline character to move to the next line of the triangle.
 output for n = 4:
1
01
101
0101
*/
