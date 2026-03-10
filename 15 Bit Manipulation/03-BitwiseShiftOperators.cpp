#include <iostream>
using namespace std;
// Bitwise Shift Operators
int main()
{
  // Left Shift Operator (<<)
  cout << "Left Shift Operator (<<):" << endl;
  cout << "7 << 2 = " << (7 << 2) << endl; // Result: 28 (In binary: 0000 0111 << 2 = 0001 1100)

  // Right Shift Operator (>>)
  cout << "Right Shift Operator (>>):" << endl;
  cout << "7 >> 2 = " << (7 >> 2) << endl; // Result: 1 (In binary: 0000 0111 >> 2 = 0000 0001)

  return 0;
}