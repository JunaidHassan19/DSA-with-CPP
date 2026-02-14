#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i <= 4; i++) // Outer loop 0 to 4
  {
    for (int j = 0; j <= i; j++) // Inner loop 0 to i
    {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}

/*
Output:
*
* *
* * *
* * * *

*/