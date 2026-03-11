#include <iostream>
using namespace std;

/*

Question 1: Write a function to clear the range of bits from i to j in a given number. (i and j are counted backwards from the right end of the number)

Examples:
Input: num = 15, i = 1, j = 3
Output: 1

Explanation: 15 in binary form is => 00001111 [i = 1st & j = 3rd bit underlined]

After bits are cleared, number will become 00000001
Input: num = 31, i = 1, j = 3
Output: 17

*/

void clearBitInRange(int num, int i, int j)
{
  int a = (~0) << (j + 1);
  int b = (1 << i) - 1;

  int mask = a | b;
  num = num & mask;

  cout << num << endl;
}

int main()
{

  clearBitInRange(15, 1, 3);
  return 0;
}