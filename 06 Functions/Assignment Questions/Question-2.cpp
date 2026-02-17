// Question 2: write a function to calculate the sum of digits of a number.

#include <iostream>
using namespace std;

int sum(int n)
{
  int rev = 0;  // sum of digits
  while (n > 0) // while there are digits left
  {
    rev += n % 10; // add the last digit to rev
    n /= 10;       // remove the last digit
  }
  return rev; // return the sum of digits
}
int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  cout << sum(n) << endl;
}

/*
  int sum(int n)
  {
    int rev = 0;
    while (n > 0)
    {
      rev += n % 10;
      n /= 10;
    }
    return rev;
  }

  int main()
  {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << sum(n) << endl;
  }
*/