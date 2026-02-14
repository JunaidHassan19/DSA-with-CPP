/*
Question 3: WAP to input a number and check whether the number is an Armstrong number or not.An Armstrong number is a number that is equal to the sum of cubes of its digits
*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a 3 digit number: ";
  cin >> n;

  int num = n;     // We will use this variable to calculate the sum of cubes of digits
  int cubeSum = 0; // This variable will store the sum of cubes of digits

  while (num > 0) // We will keep extracting the last digit of the number and adding its cube to the cubeSum until the number becomes 0
  {
    int lastDig = num % 10;                 // This will give us the last digit of the number
    cubeSum += lastDig * lastDig * lastDig; // This will add the cube of the last digit to the cubeSum
    num /= 10;                              // This will remove the last digit from the number
  }
  if (cubeSum == n)
  {
    cout << n << " Is Armstrong" << endl;
  }
  else
  {
    cout << n << " Is NOT Armstrong" << endl;
  }

  return 0;
}

/*
output:
Enter a 3 digit number: 153
153 Is Armstrong
*/