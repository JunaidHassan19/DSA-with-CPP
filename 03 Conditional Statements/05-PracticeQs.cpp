#include <iostream>
using namespace std;
// Find the largest of 3 numbers
int main()
{
  int num1, num2, num3;
  cout << "Enter number 1: ";
  cin >> num1;
  cout << "Enter number 2: ";
  cin >> num2;
  cout << "Enter number 3: ";
  cin >> num3;

  if (num1 > num2 && num1 > num3)
  {
    cout << num1 << " Is Largest.";
  }
  else if (num2 > num1 && num2 > num3)
  {
    cout << num2 << " Is Largest.";
  }
  else
  {
    cout << num3 << " Is Largest.";
  }
}