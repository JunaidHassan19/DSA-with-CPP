#include <iostream>
#include <vector>
using namespace std;

// Fibonacci number using recursion
int fib(int n) // tc = O(2^n)
{
  if (n == 0 || n == 1)
  {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}

// Fibonacci number using dynamic programming (memoization)
int fibDP(int n, vector<int> &f) // tc = O(n) optimized using memoization
{
  if (n == 0 || n == 1)
  {
    return n;
  }

  if (f[n] != -1)
  {
    return f[n];
  }
  f[n] = fibDP(n - 1, f) + fibDP(n - 2, f);
  return f[n];
}

int main()
{
  int n = 6;
  vector<int> f(n + 1, -1);
  cout << fib(n) << endl;
  cout << fibDP(n, f) << endl;

  return 0;
}