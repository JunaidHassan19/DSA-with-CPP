#include <iostream>
using namespace std;

int sitIthBit(int num, int i)
{
  int bitMask = 1 << i;
  return (num | bitMask);
}

int main()
{
  cout << sitIthBit(6, 3) << endl;
  return 0;
}