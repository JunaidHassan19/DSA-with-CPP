/*
Question 3: What will be the value of x & y in the following program:
*/
#include <iostream>
using namespace std;

int main()
{
  int a = 63, b = 36;
  bool x = (a < b) ? true : false;
  int y = (a > b) ? a : b;
  cout << x << "," << y << endl;
  return 0;
}

/*
the value of x will be false (0) because 63 is not less than 36, and the value of y will be 63 because 63 is greater than 36. Therefore, the
output:
0,63
*/