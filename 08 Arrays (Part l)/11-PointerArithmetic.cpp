#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  int *aptr = &a;       // aptr is pointing to a
  cout << aptr << endl; // address of a

  aptr++;               // aptr is now pointing to the next integer location
  cout << aptr << endl; // address of a + 4 (assuming int is 4 bytes)

  int b = 20;
  int *bptr = &b;       // bptr is pointing to b
  cout << bptr << endl; // address of b

  bptr--;               // bptr is now pointing to the previous integer location
  cout << bptr << endl; // address of b - 4 (assuming int is 4 bytes)
  return 0;
}