#include <iostream>
using namespace std;
/*
Question 1: WAP to fine the Factorial of a Number by the user
*/

int main()
{
  int n;
  cout << "Enter a Number: ";
  cin >> n;

  int result = 1;
  for (int i = n; i > 0; i--)
  {
    result *= i;
  }
  cout << n << " Factorial = " << result;

  return 0;
}

/*
output:
Enter a Number: 5
5 Factorial = 120
*/