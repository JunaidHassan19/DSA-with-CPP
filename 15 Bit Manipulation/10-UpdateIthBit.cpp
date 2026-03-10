#include <iostream>
using namespace std;

/*
Qs. WAP to update the ith bit in a number accordinh to a given value (0 or 1).
    num = 7, i = 2, val = 0 ->Output = 3
    num = 7, i = 3, val = 1 ->Output = 15
*/

void updateIthBit(int num, int i, int val)
{
  num = num & ~(1 << i); // Clear the i-th bit of num

  num = num | (val << i); // Set the i-th bit of num to val (0 or 1)

  cout << num << endl;
}

int main()
{
  updateIthBit(7, 3, 1);
  return 0;
}