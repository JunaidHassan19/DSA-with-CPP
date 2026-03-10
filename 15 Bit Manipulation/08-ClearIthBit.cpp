#include <iostream>
using namespace std;

int clearIthBit(int num, int i)
{
  int bitMaks = ~(1 << i); // Invert the bitmask to have all bits set to 1 except the i-th bit which is 0
  return num & bitMaks;    // Use bitwise AND to clear the i-th bit of num
}

int main()
{
  cout << clearIthBit(6, 1) << endl;
  return 0;
}