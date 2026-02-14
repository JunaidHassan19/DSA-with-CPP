#include <iostream>
using namespace std;

int main()
{
  int n = 5;
  for (int i = 1; i <= 5; i++) // Outer loop 0 to 4
  {
    for (int j = 1; j <= n - i + 1; j++) // Inner loop 0 to n - i + 1
    {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}
/*
Output:
* * * * *
* * * *
* * *
* *
*
*/