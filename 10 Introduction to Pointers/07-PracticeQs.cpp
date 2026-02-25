/*
What will be the ptr2 point in the following code:

int x = 5, y = 10;
int *ptr1 = &x, *ptr2 = &y;
ptr2 = ptr1;
*/

#include <iostream>
using namespace std;

int main()
{
  int x = 5, y = 10;
  int *ptr1 = &x, *ptr2 = &y;
  ptr2 = ptr1;

  cout << ptr2 << endl;
  cout << ptr1 << endl;
  cout << &x << endl;
  return 0;
}

/*
output:
0x7ffee3bff5c8
0x7ffee3bff5c8
0x7ffee3bff5c8
*/