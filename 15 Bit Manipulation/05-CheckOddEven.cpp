#include <iostream>
using namespace std;

void oddOrEven(int num)
{
  if (!(num & 1))
  {
    cout << "Even" << endl;
  }
  else
  {
    cout << "Odd" << endl;
  }
}

int main()
{
  oddOrEven(5);
  oddOrEven(10);
  oddOrEven(7);
  return 0;
}

/*
BitMask
========
A bitmask is a number (pattern of bits) used with bitwise operators
to check, set, clear, or toggle specific bits in another number.

Think of it as a "mask" that selects which bits you care about.


1. Check a Bit (using &)
-------------------------
   To check if the i-th bit is set (1) or not (0):

   bitmask = (1 << i)
   if (num & bitmask) → bit is SET (1)
   else               → bit is NOT SET (0)

   Example: Check if 2nd bit of 5 is set
     num     = 5     →  0101
     bitmask = 1<<2  →  0100
     5 & 4           →  0100  → non-zero → 2nd bit is SET ✓


2. Set a Bit (using |)
-----------------------
   To turn ON the i-th bit (make it 1):

   num = num | (1 << i)

   Example: Set 1st bit of 5
     num     = 5     →  0101
     bitmask = 1<<1  →  0010
     5 | 2           →  0111  → 7


3. Clear a Bit (using & ~)
---------------------------
   To turn OFF the i-th bit (make it 0):

   num = num & ~(1 << i)

   Example: Clear 2nd bit of 5
     num      = 5     →  0101
     bitmask  = 1<<2  →  0100
     ~bitmask         →  1011
     5 & 1011         →  0001  → 1


4. Toggle a Bit (using ^)
--------------------------
   To flip the i-th bit (0→1 or 1→0):

   num = num ^ (1 << i)

   Example: Toggle 0th bit of 5
     num     = 5     →  0101
     bitmask = 1<<0  →  0001
     5 ^ 1           →  0100  → 4


Summary Table:
--------------
  Operation  |  Formula             |  Operator Used
  -----------|----------------------|---------------
  Check bit  |  num & (1 << i)      |  AND (&)
  Set bit    |  num | (1 << i)      |  OR (|)
  Clear bit  |  num & ~(1 << i)     |  AND + NOT (& ~)
  Toggle bit |  num ^ (1 << i)      |  XOR (^)

Note: i is 0-indexed (rightmost bit = 0th bit).
*/
