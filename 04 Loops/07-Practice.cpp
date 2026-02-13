#include <iostream>
using namespace std;

int main()
{
  // Q. Print the sum of digits of a number using while loop
  // n = 10829

  int n;
  cout << "Enter a Number: ";
  cin >> n;
  int sum = 0;
  while (n > 0)
  {
    int lastDigit = n % 10; // Get the last digit of n
    sum += lastDigit;       // Add the last digit to the sum
    n /= 10;                // Remove the last digit from n by dividing it by 10
  }
  cout << sum;
  // Output: Enter a Number: 10829
  //         20
  //***********************************************************************************

  // Q. Print the Sum of odd Digits of a number using while Loop.

  int n;
  cout << "Enter a Number: ";
  cin >> n;
  int sum = 0;  // Variable to store the sum of odd digits
  while (n > 0) // Loop until n becomes 0
  {
    int lastDigit = n % 10; // Get the last digit of n
    if (lastDigit % 2 != 0) // Check if the last digit is odd
    {
      sum += lastDigit; // If it's odd, add it to the sum
    }

    n /= 10; // Remove the last digit from n by dividing it by 10
  }
  cout << sum;
  // Output: Enter a Number: 10829
  //         10

  //*******************************************************************************************

  /*
     Qs: Print the digits of a given number in reverse using while loop
        n = 10829
  */

  int n = 10829;
  int lastDig;
  while (n > 0)
  {
    lastDig = n % 10; // Get the last digit
    cout << lastDig;  // Print the last digit
    n /= 10;          // Remove the last digit from n
  }

  cout << endl;

  // Output: 92801

  //*******************************************************************************************

  /*
     Qs: Reverse a given and print the result
  */

  int n = 10829;
  int result = 0; // Variable to store the reversed number

  while (n > 0)
  {
    int lastDig = n % 10;           // Get the last digit of n
    result = result * 10 + lastDig; // Update the result by shifting the previous digits to the left and adding the last digit
    n /= 10;                        // Remove the last digit from n by dividing it by 10
  }
  cout << result;

  // Output: 92801

  return 0;
}
