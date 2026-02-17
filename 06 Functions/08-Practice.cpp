// WAP to print if a number is Prime or not.

#include <iostream>
using namespace std;

// A function to check if a number is prime or not.
bool isPrime(int n)
{
  if (n == 1) // 1 is not a prime number.
  {
    return false;
  }
  // A prime number is only divisible by 1 and itself. So, we check if n is divisible by any number from 2 to n-1.
  for (int i = 2; i <= n - 1; i++)
  {
    if (n % i == 0) // If n is divisible by any number from 2 to n-1, then it is not a prime number.
    {
      return false; // If n is divisible by any number from 2 to n-1, then it is not a prime number.
    }
  }
  return true; // If n is not divisible by any number from 2 to n-1, then it is a prime number.
}

int main()
{
  int n;
  cout << "Enter a Number: ";
  cin >> n;

  cout << isPrime(n);
}