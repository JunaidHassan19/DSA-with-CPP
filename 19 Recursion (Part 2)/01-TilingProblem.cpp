#include <iostream>
using namespace std;

int tilingProblem(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  return tilingProblem(n - 1) + tilingProblem(n - 2);

  // // Vertical
  // int ver = tilingProblem(n - 1);
  // // Horizontal
  // int hor = tilingProblem(n - 2);
  // return ver + hor;
}

int main()
{
  int n = 10;
  cout << tilingProblem(n) << endl;
  return 0;
}