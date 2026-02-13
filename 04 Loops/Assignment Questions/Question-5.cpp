/*
Question 5: For a positive N, WAP that prints the first N Fibonacci numbers.
(Assume N >= 2)
Fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...
This is a series where each number is a sum of previous 2 numbers in the series.
Eg: 1 = 0+1, 2 = 1+1, 3 = 1+2, 5 = 2+3, 8 = 3+5 & so on
*/
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the Number: ";
  cin >> n;
  int p1, p2;                  // Previous 2 Fibonacci numbers
  p1 = 0;                      // F(0) = 0
  p2 = 1;                      // F(1) = 1
  for (int i = 2; i <= n; i++) // Loop from 2 to N to calculate Fibonacci numbers
  {
    int curr = p1 + p2; // Current Fibonacci number is the sum of previous 2
    p1 = p2;            // Update previous 2 numbers for the next iteration
    p2 = curr;          // Update previous 2 numbers for the next iteration
  }
  cout << p2; // The Nth Fibonacci number is stored in p2 after the loop
  return 0;
}

/*
class Solution
{
public:
  int fib(int n)
  {
    if (n == 0)
      return 0;
    int prevPrev = 0;
    int prev = 1;
    int current;

    for (int i = 2; i <= n; i++)
    {
      current = prevPrev + prev;
      prevPrev = prev;
      prev = current;
    }
    return prev;
  }
};

int main()
{
  Solution sol;
  int n;
  cout << "Enter the Number: ";
  cin >> n;
  cout << "The " << n << "th Fibonacci number is: " << sol.fib(n) << endl;
  return 0;
}
*/
