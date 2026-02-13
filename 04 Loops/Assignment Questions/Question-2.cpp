/*
Question 2: WAP to print the Multiplication table of a number, entered by the user
*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int mul;                      // To store the result of multiplication
  for (int i = 1; i <= 10; i++) // Loop from 1 to 10 for multiplication table
  {
    mul = n * i; // Calculate multiplication
    cout << n << " X " << i << " = " << mul << endl;
  }
  return 0;
}

/*
output:
Enter a number: 5
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45
5 X 10 = 50

*/