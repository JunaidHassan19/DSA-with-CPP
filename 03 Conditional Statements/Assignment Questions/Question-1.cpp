/*
Quention 1 : Write a C++ program to get a number from the user and print whether it's positive, negative or zero.
*/
#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a Number: ";
  cin >> num;

  if (num > 0)
  {
    cout << "The Number is Positive" << endl;
  }
  else if (num == 0)
  {
    cout << "The Number is Zero" << endl;
  }
  else
  {
    cout << "The Number is Negative" << endl;
  }

  return 0;
}
