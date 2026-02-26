#include <iostream>
using namespace std;

// Input and Output of 2D Arrays:
// To input values into a 2D array, we can use nested loops.
int main()
{
  int arr[3][4];    // 3 rows and 4 columns
  int n = 3, m = 4; // n = number of rows, m = number of columns

  for (int i = 0; i < n; i++) // loop through rows
  {
    for (int j = 0; j < m; j++) // loop through columns
    {
      cin >> arr[i][j]; // input value for row i and column j
    }
  }

  for (int i = 0; i < n; i++) // loop through rows
  {
    for (int j = 0; j < m; j++) // loop through columns
    {
      cout << arr[i][j] << " "; // output value for row i and column j
    }
    cout << endl;
  }
  return 0;
}

/*
output:
1 2 3 4
5 6 7 8
9 10 11 12
*/