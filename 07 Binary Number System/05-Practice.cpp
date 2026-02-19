#include <iostream>
using namespace std;

/*
// void binToDec(int binNum)
// {
//   int n = binNum;
//   int decNum = 0;
//   int pow = 1;

//   while (n > 0)
//   {
//     int lastDig = n % 10;
//     decNum += lastDig * pow;
//     pow *= 2;
//     n /= 10;
//   }

//   cout << decNum;
// }

void binToDec(int BinNum)
{
  int n = BinNum;
  int decNum = 0;
  int pow = 1;

  while (n > 0)
  {
    int lastDig = n % 10;
    decNum += lastDig * pow;
    pow *= 2;
    n /= 10;
  }
  cout << decNum;
}

int main()
{
  int n;
  cout << "Enter a Binary number: ";
  cin >> n;

  binToDec(n);
}
*/

void decToBin(int decNum)
{
  int n = decNum;
  int pow = 1;
  int binNum = 0;

  while (n > 0)
  {
    int rem = n % 2;
    binNum += rem * pow;
    n /= 2;
    pow *= 10;
  }
  cout << binNum;
}

int main()
{
  int n;
  cout << "Enter a Decimal number: ";
  cin >> n;

  decToBin(n);
}