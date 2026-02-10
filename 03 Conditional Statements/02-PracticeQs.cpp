#include <iostream>
using namespace std;

int main()
{
  // Print the largest of 2 numbers.
  int num1, num2;
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter Second number: ";
  cin >> num2;

  if (num1 > num2)
  {
    cout << "The largest number is: " << num1 << endl;
  }
  else
  {
    cout << num2 << " Is the largest number" << endl;
  }

  // Print if a Number is Odd or Even.
  int num;
  cout << "Enter a Number:";
  cin >> num;

  if (num % 2 == 0)
  {
    cout << num << " Is Even" << endl;
  }
  else
  {
    cout << num << " Is Odd" << endl;
  }

  return 0;
}