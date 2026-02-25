/*

What will be the output of the following code:

int x;
int *ptr;
x = 7;
ptr = &x;
cout << *ptr;

*/

#include <iostream>
using namespace std;

int main()
{
  int x;
  int *ptr;
  x = 7;
  ptr = &x;
  cout << *ptr;
}