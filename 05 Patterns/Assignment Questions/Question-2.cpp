/*
Question 2: Print the Rhombus Pattern.
For n = 5
     *****
    *****
   *****
  *****
 *****
*/

#include <iostream>
using namespace std;

int main()
{
  int n = 5;
  for (int i = 0; i < n; i++) // outer loop for rows
  {
    for (int j = 0; j <= n - i - 1; j++) // inner loop for spaces
    {
      cout << " "; // print spaces before the stars
    }
    for (int j = 0; j < n; j++) // inner loop for stars
    {
      cout << "*"; // print stars after the spaces
    }
    cout << endl;
  }
  return 0;
}

/*
Logic:
1. We have an outer loop that runs from 0 to n-1, which represents the number of rows in the rhombus.
2. Inside the outer loop, we have two inner loops:
   - The first inner loop runs from 0 to n-i-1, which prints the spaces before the stars. The number of spaces decreases as we move down the rows.
   - The second inner loop runs from 0 to n-1, which prints the stars. The number of stars remains constant for each row.
3. After the inner loops complete for each row, we print a newline character to move to the next line of the rhombus.
Output for n = 5:
     *****
    *****
   *****
  *****
 *****
*/