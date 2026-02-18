#include <iostream>
using namespace std;
// Function to convert binary number to decimal
void binToDec(int binNum)
{
  int n = binNum; // Store the binary number in a temporary variable
  int decNum = 0; // Initialize the decimal number to 0
  int pow = 1;    // Initialize the power of 2 to 1

  while (n > 0) // Loop until the binary number becomes 0
  {
    int lastDigit = n % 10;    // Get the last digit of the binary number
    decNum += lastDigit * pow; // Add the last digit multiplied by the power of 2 to the decimal number
    pow *= 2;                  // Update the power of 2 for the next iteration
    n /= 10;                   // Remove the last digit from the binary number
  }
  cout << decNum;
}

int main()
{
  long int n;
  cout << "Enter a Binary Number: ";
  cin >> n;
  binToDec(n);
  return 0;
}