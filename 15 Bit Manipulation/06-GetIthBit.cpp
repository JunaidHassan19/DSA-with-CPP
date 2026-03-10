#include <iostream>
using namespace std;

int getIthBit(int num, int i)
{
  int bitMask = 1 << i;

  if (!(num & bitMask))
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

int main()
{
  cout << getIthBit(6, 2);
  return 0;
}

/*
output: 1

logic:
num     = 6     →  0110
bitmask = 1<<2  →  0100
6 & 4           →  0100  → non-zero → 2nd bit is SET ✓
*/