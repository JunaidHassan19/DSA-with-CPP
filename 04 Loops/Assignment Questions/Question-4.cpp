/*
Question 4: For a Positive N, WAP that prints all the prime numbers from 2 to N.

       (Assume N >= 2).
*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a Number: ";
  cin >> n;                    // We will take input from the user for the value of N
  for (int i = 2; i <= n; i++) // We will loop from 2 to N and check for each number whether it is prime or not
  {
    int curr = i;                    // We will store the current number in a variable called curr
    bool isPrime = true;             // We will assume that the current number is prime until we find a divisor for it
    for (int j = 2; j * j <= i; j++) // We will loop from 2 to the square root of the current number and check if it is divisible by any of these numbers
    {
      if (curr % 2 == 0) // If the current number is divisible by any of these numbers, then it is not prime and we will set the isPrime variable to false and break out of the loop
      {
        isPrime = false; // This will set the isPrime variable to false if the current number is divisible by any of the numbers from 2 to the square root of the current number
      }
    }
    if (isPrime) // If the isPrime variable is still true after the inner loop, then it means that the current number is prime and we will print it
    {
      cout << curr << " "; // This will print the current number if it is prime
    }
  }
  cout << endl;
  return 0;
}