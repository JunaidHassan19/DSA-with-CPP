/*
What will be the output of the following code?
*/

#include <iostream>
using namespace std;

void multipleBy2(int &a, int &b, int &c)
{
  a *= 2; // a = a * 2; // This will change the value of 'a' in the main function because 'a' is passed by reference
  b *= 2; // b = b * 2; // This will change the value of 'b' in the main function because 'b' is passed by reference
  c *= 2; // c = c * 2; // This will change the value of 'c' in the main function because 'c' is passed by reference

  cout << a, b, c;
}

int main()
{
  int x = 1, y = 2, z = 3;
  multipleBy2(x, y, z);

  return 0;
}

/*
output:
2 4 6

*/