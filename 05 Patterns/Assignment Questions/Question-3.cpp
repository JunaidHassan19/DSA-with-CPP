/*
Question 3: Print the Palindromic Pattern with Numbers.
For n = 5
         1
       2 1 2
     3 2 1 2 3
   4 3 2 1 2 3 4
 5 4 3 2 1 2 3 4 5

*/

#include <iostream>
using namespace std;

int main()
{
  int n = 5;
  for (int i = 1; i <= n; i++) // outer loop for rows
  {
    for (int j = 1; j <= n - i; j++) // inner loop for spaces
    {
      cout << " "; // print spaces before the numbers
    }
    for (int j = i; j >= 1; j--) // inner loop for the first half of the numbers (decreasing order)
    {
      cout << j; // print numbers in decreasing order
    }
    for (int j = 2; j <= i; j++) // inner loop for the second half of the numbers (increasing order)
    {
      cout << j; //  print numbers in increasing order
    }
    cout << endl;
  }
  return 0;
}

/*
Logic:
1. We have an outer loop that runs from 1 to n, which represents the number of rows in the palindromic pattern.
2. Inside the outer loop, we have three inner loops:
   - The first inner loop runs from 1 to n-i, which prints the spaces before the numbers. The number of spaces decreases as we move down the rows.
   - The second inner loop runs from i to 1, which prints the first half of the numbers in decreasing order.
   - The third inner loop runs from 2 to i, which prints the second half of the numbers in increasing order.
3. After the inner loops complete for each row, we print a newline character to move to the next line of the palindromic pattern.
Output for n = 5:
         1
       2 1 2
     3 2 1 2 3
   4 3 2 1 2 3 4
 5 4 3 2 1 2 3 4 5
*/