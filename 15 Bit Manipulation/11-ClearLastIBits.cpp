#include <iostream>
using namespace std;

/*
Qs WAP to clear the last i bits of a number.
    num = 15, i = 2 ->Output = 12
    num = 15, i = 3 ->Output = 8
*/
void clearIthBits(int num, int i)
{
  int bitMask = (~0) << i; // Create a bitmask with the last i bits set to 0 and the rest set to 1

  num = num & bitMask; // Use bitwise AND to clear the last i bits of num

  cout << num << endl;
}

int main()
{
  clearIthBits(15, 2);
  return 0;
}