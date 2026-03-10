#include <iostream>
using namespace std;

bool isPowerOf2(int num)
{
  if (!(num & (num - 1))) // If num is a power of 2, then num & (num - 1) will be 0
  {
    return true; // num is a power of 2
  }
  else
  {
    return false; // num is not a power of 2
  }
}

int main()
{
  cout << isPowerOf2(6) << endl;
  cout << isPowerOf2(8) << endl;
  cout << isPowerOf2(10) << endl;
  cout << isPowerOf2(13) << endl;
  return 0;
}