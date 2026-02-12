#include <iostream>
using namespace std;

int main()
{
  // int n;
  // cout << "Enter a 3 Digit number: ";
  // cin >> n;

  // int num = n;

  // int dig1 = num % 10;
  // num /= 10;

  // int dig2 = num % 10;
  // num /= 10;

  // int dig3 = num;

  // int cubeSum = dig1 * dig1 * dig1 +
  //               dig2 * dig2 * dig2 +
  //               dig3 * dig3 * dig3;

  // if (cubeSum == n)
  // {
  //   cout << num << " Is a Armstrong" << endl;
  // }
  // else
  // {
  //   cout << num << " Is NOT a Armstrong" << endl;
  // }
  // return 0;

  // int n;
  // cout << "Enter a 3 digit number: ";
  // cin >> n;

  // int num = n;

  // int dig1 = num % 10;
  // num /= 10;

  // int dig2 = num % 10;
  // num /= 10;

  // int dig3 = num;

  // int cubeSum = dig1 * dig1 * dig1 +
  //               dig2 * dig2 * dig2 +
  //               dig3 * dig3 * dig3;

  // if (cubeSum == n)
  // {
  //   cout << num << " Is Armstrong" << endl;
  // }
  // else
  // {
  //   cout << num << " Is NOT Armstrong" << endl;
  // }

  int n;
  cout << "Enter 3 digit number: ";
  cin >> n;

  int num = n;

  int digit1 = num % 10;
  num /= 10;
  int digit2 = num % 10;
  num /= 10;
  int digit3 = num;

  int cubeSum = digit1 * digit1 * digit1 +
                digit2 * digit2 * digit2 +
                digit3 * digit3 * digit3;

  if (cubeSum == n)
  {
    cout << n << " Is" << endl;
  }
  else
  {
    cout << n << " Is NOT";
  }

  return 0;
}