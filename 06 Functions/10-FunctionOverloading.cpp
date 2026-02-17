#include <iostream>
using namespace std;
// Function overloading is a feature in C++ that allows us to have multiple functions with the same name but different parameters. The compiler determines which function to call based on the number and type of arguments passed to the function.
int sum(int a, int b) // Function to calculate the sum of two integers.
{
  cout << a + b << endl;
  ;
  return a + b;
}
int sum(double a, double b) // Function to calculate the sum of two double values.
{
  cout << a + b << endl;
  return a + b;
}

int sum(int a, int b, int c) // Function to calculate the sum of three integers.
{
  cout << a + b + c << endl;
  return a + b + c;
}

int main()
{
  sum(2, 5);     // Calls the sum function that takes two integers as parameters.
  sum(6, 10);    // Calls the sum function that takes two integers as parameters.
  sum(5.5, 4.5); // Calls the sum function that takes two double values as parameters.
  sum(2, 4, 3);  // Calls the sum function that takes three integers as parameters.

  return 0;
}