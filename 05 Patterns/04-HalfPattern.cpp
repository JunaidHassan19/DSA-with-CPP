#include <iostream>
using namespace std;
int main()
{
  int n = 4;
  for (int i = 1; i <= n; i++) // Outer loop 1 to n
  {
    for (int j = 1; j <= i; j++) // Inner loop 1 to i
    {
      cout << j;
    }
    cout << endl;
  }
  return 0;
}
/*
Output:
1
12
123
1234

loop logic:
i = 1, j = 1 (prints 1)
i = 2, j = 1 (prints 1), j = 2 (prints 2)
i = 3, j = 1 (prints 1), j = 2 (prints 2), j = 3 (prints 3)
i = 4, j = 1 (prints 1), j = 2 (prints 2), j = 3 (prints 3), j = 4 (prints 4)
*/