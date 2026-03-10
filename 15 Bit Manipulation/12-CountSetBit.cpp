#include <iostream>
using namespace std;

// Qs. WAP to count the number of set bits in a number.
int countSetBits(int num)
{
  int count = 0;

  while (num > 0) // Loop until num becomes 0
  {
    // Get the last bit of num (1 if it's set, 0 if it's not)
    int lastDig = num & 1;

    // Increment count if the last bit is 1
    count += lastDig;

    // Right shift num by 1 to check the next bit in the next iteration
    num = num >> 1;
  }
  cout << count << endl;
  return count;
}

int main()
{
  countSetBits(10);
  return 0;
}