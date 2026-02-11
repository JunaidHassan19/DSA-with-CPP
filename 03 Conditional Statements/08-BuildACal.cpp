/*
Build a Calculator using Switch for the 4 basic arithmetic operations(+, -, *, /).
*/

#include <iostream>  // Header file for input/output operations
using namespace std; // Allows using cout, cin without std:: prefix

int main()
{
  // Step 1: Get the first number from user
  int num1;
  cout << "Enter the First Number: ";
  cin >> num1;

  // Step 2: Get the operation symbol from user
  // Using 'char' type to store a single character (+, -, *, /)
  char operation;
  cout << "Choose Operation (+, -, *, /): ";
  cin >> operation;

  // Step 3: Get the second number from user
  int num2;
  cout << "Enter the Second Number: ";
  cin >> num2;

  // ============ SWITCH STATEMENT APPROACH (commented out) ============
  // Switch can also be used with 'char' type
  // Each case checks for a specific operation symbol
  switch (operation)
  {
  case '+':
    cout << num1 + num2;
    break;
  case '-':
    cout << num1 - num2;
    break;
  case '*':
    cout << num1 * num2;
    break;
  case '/':
    cout << num1 / num2;
    break;

  default:
    cout << "Invalid input" << endl;
    break;
  }

  // ============ IF-ELSE APPROACH ============
  // Step 4: Perform calculation based on the operation chosen

  if (operation == '+')
  {
    // Addition: adds both numbers
    cout << num1 + num2 << endl;
  }
  else if (operation == '-')
  {
    // Subtraction: subtracts num2 from num1
    cout << num1 - num2 << endl;
  }
  else if (operation == '*')
  {
    // Multiplication: multiplies both numbers
    cout << num1 * num2 << endl;
  }
  else if (operation == '/')
  {
    // Division: divides num1 by num2
    // Note: Integer division - result will be truncated (no decimals)
    cout << num1 / num2 << endl;
  }
  else
  {
    // If user enters any other character, show error message
    cout << "Invalid" << endl;
  }

  return 0; // Program executed successfully
}