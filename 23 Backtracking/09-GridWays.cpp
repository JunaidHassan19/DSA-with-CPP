#include <iostream>
using namespace std;

// Grid Ways - Count of all paths from top-left to bottom-right in a grid (only right and down moves allowed)
int gridWays(int row, int col, int n, int m, string path)
{
  if (row == n - 1 && col == m - 1) // Base case: reached destination
  {
    cout << path << endl;

    return 1;
  }
  if (col >= m || row >= n) // Base case: out of bounds
  {
    return 0;
  }

  // Right turn
  int val1 = gridWays(row, col + 1, n, m, path + "R");

  // Down turn
  int val2 = gridWays(row + 1, col, n, m, path + "D");

  return val1 + val2;
}

int main()
{
  int n = 3;
  int m = 3;
  string path = "";

  cout << gridWays(0, 0, n, m, path);
  return 0;
}

/*
Logic:
- We start at (0,0) and want to reach (n-1,m-1).
- At each step, we have 2 choices: move right or move down.
- We recursively explore both choices and sum their results.
*/