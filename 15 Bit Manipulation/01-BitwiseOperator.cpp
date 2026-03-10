#include <iostream>
using namespace std;

int main()
{
  // Bitwise AND
  int a = 5;             // In binary: 0101
  int b = 3;             // In binary: 0011
  int andResult = a & b; // Result: 1 (In binary: 0001)
  cout << "Bitwise AND: " << andResult << endl;

  // Bitwise OR
  int orResult = a | b; // Result: 7 (In binary: 0111)
  cout << "Bitwise OR: " << orResult << endl;

  // Bitwise XOR
  int xorResult = a ^ b; // Result: 6 (In binary: 0110)
  cout << "Bitwise XOR: " << xorResult << endl;

  return 0;
}

/*
AND Operator (&) compares each bit of two numbers and returns 1 if both bits are 1, otherwise it returns 0.
OR Operator (|) compares each bit of two numbers and returns 1 if at least one of the bits is 1, otherwise it returns 0.
XOR Operator (^) compares each bit of two numbers and returns 1 if the bits are different, otherwise it returns 0.
*/