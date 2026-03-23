#include <iostream>
using namespace std;

// Tiling Problem
int tilingProblem(int n)
{
  if (n == 0 || n == 1) // Base Case
  {
    return 1;
  }

  return tilingProblem(n - 1) + tilingProblem(n - 2); // Recursive Case

  // // Tiling Problem can be solved by placing a tile vertically or horizontally.
  // // Vertical
  // int ver = tilingProblem(n - 1);// Recursive Case
  // // Horizontal
  // int hor = tilingProblem(n - 2);// Recursive Case
  // return ver + hor;// Total Ways
}

int main()
{
  int n = 10;
  cout << tilingProblem(n) << endl;
  return 0;
}

/*
logic:
1. We have a floor of size 2 x n and tiles of size 2 x 1. We need to find the number of ways to tile the floor using the tiles.
2. We can place a tile vertically or horizontally.
3. If we place a tile vertically, then we are left with a floor of size 2 x (n - 1). So, the number of ways to tile the floor in this case is tilingProblem(n - 1).
4. If we place a tile horizontally, then we are left with a floor of size 2 x (n - 2). So, the number of ways to tile the floor in this case is tilingProblem(n - 2).
5. Therefore, the total number of ways to tile the floor is tilingProblem(n - 1) + tilingProblem(n - 2).


*/