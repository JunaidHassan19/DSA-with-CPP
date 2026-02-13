// Qs Check if a number is prime or not (OPTIMIZED)
#include <iostream>
#include <cmath> // for sqrt function
using namespace std;

int main()
{
  int n;
  cout << "Enter the Number: ";
  cin >> n;
  bool isPrime = true; // Assume the number is prime until we find a divisor

  for (int i = 2; i < sqrt(n); i++) // We only need to check up to the square root of n
  {
    if (n % i == 0) // If n is divisible by any number between 2 and sqrt(n), it is not prime
    {
      isPrime = false; // Set isPrime to false if we find a divisor
      break;
    }
  }
  if (isPrime) // If isPrime is still true after the loop, then n is prime
  {
    cout << n << " Is prime" << endl;
  }
  else
  {
    cout << n << " Is NOT prime";
  }
  return 0;
}