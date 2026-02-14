#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i <= 4; i++) // Outer loop
  {
    for (int j = 1; j <= 4; j++) // Inner loop
    {
      // Print the value of i in each iteration of the inner loop
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}

/*
Output:
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/