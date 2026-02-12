/*
Question 5: For any 3-digit number, check whether it’s an Armstrong number or not. An Armstrong number is a number that is equal to the sum of cubes of its digits. Eg: 371 is an Armstrong number. 3*3*3 + 7*7*7 + 1*1*1 = 371
*/
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter a 3 digit number:";
  cin >> n;
  // to store the original number for later comparison
  int num = n;
  // extract the last digit
  int dig1 = num % 10;
  // remove the last digit
  num /= 10;
  // extract the second digit
  int dig2 = num % 10;
  // remove the second digit
  num /= 10;
  // the remaining digit is the first digit
  int dig3 = num;
  // calculate the sum of cubes of the digits
  int cubeSum = dig1 * dig1 * dig1 + dig2 * dig2 * dig2 + dig3 * dig3 * dig3;
  // compare the sum of cubes with the original number
  if (cubeSum == n)
  {
    // if they are equal, it's an Armstrong number
    cout << n << " is an Armstrong Number\n";
  }
  else
  {
    // if they are not equal, it's not an Armstrong number
    cout << n << " is NOT an Armstrong Number\n";
  }
  return 0;
}
/*
output:
enter a 3 digit number:371
371 is an Armstrong Number

enter a 3 digit number:123
123 is NOT an Armstrong Number
*/