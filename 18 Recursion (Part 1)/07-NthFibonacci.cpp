#include <iostream>
using namespace std;

// Function to calculate the nth Fibonacci number
int fibonacci(int n)
{
  if (n == 0 || n == 1)// base case
    return n;

  return fibonacci(n - 1) + fibonacci(n - 2);// recursive case
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << "Fibonacci of " << n << " = " << fibonacci(n) << endl;
  return 0;
}

/*
Call Stack for fibonacci(5):
fibonacci(5)
  -> fibonacci(4) + fibonacci(3)
    -> (fibonacci(3) + fibonacci(2)) + (fibonacci(2) + fibonacci(1))
      -> ((fibonacci(2) + fibonacci(1)) + (fibonacci(1) + fibonacci(0))) + ((fibonacci(1) + fibonacci(0)) + 1)
        -> (((fibonacci(1) + fibonacci(0)) + 1) + (1 + 0)) + ((1 + 0) + 1)
          -> (((1 + 0) + 1) + (1 + 0)) + ((1 + 0) + 1)
            -> ((1 + 1) + (1)) + ((1) + 1)
              -> (2 + 1) + (2)
                -> 3 + 2
                  -> 5
*/