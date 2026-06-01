#include <iostream>
#include <vector>
using namespace std;

// Fibonacci number using dynamic programming (tabulation) tc: O(n)
int fibTab(int n)
{
  // create a fib array to store the Fibonacci numbers up to n
  vector<int> fib(n + 1, 0);
  fib[0] = 0; // base case
  fib[1] = 1; // base case

  // fill the fib array in a bottom-up manner
  for (int i = 2; i <= n; i++)
  {
    // the Fibonacci number at index i is the sum of the two preceding numbers
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  return fib[n]; // return the nth Fibonacci number
}

int main()
{
  int n = 6;
  cout << fibTab(n) << endl;
  return 0;
}