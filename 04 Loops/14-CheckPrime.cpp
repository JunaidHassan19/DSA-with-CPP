// Qs Check if a number is prime or not
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  bool isPrime = true; // Assume the number is prime until we find a divisor

  for (int i = 2; i < n - 1; i++) // Loop from 2 to n-1 to check for divisors of n
  {
    if (n % i == 0) // If n is divisible by i, then n is not prime
    {
      isPrime = false; // Set isPrime to false if a divisor is found
      break;           // Break the loop since we have found that n is not prime, no need to check further
    }
  }
  if (isPrime) // If isPrime is still true after the loop, then n is prime
  {
    cout << n << " Number is Prime" << endl;
  }
  else
  {
    cout << n << " Is not Prime";
  }
  return 0;
}