#include <iostream>
using namespace std;
// Function to convert decimal number to binary
void decToBin(int decNum)
{
  int n = decNum; // Store the decimal number in a temporary variable
  int pow = 1;    // Initialize the power of 10 to 1
  int binNum = 0; // Initialize the binary number to 0

  while (n > 0)
  {
    int rem = n % 2;     // Get the remainder when the decimal number is divided by 2
    binNum += rem * pow; // Add the remainder multiplied by the power of 10 to the binary number
    n /= 2;              // Update the decimal number by dividing it by 2
    pow *= 10;           // Update the power of 10 for the next iteration
  }
  cout << binNum;
}

int main()
{
  int n;
  cout << "Enter a Decimal Number: ";
  cin >> n;

  decToBin(n);
}