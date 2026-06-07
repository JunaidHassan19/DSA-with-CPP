#include <iostream>
using namespace std;

// Nth catalan using recursion
int catalan(int n)
{
  // Base case: C0 = 1, C1 = 1
  if (n == 0 || n == 1)
  {
    return 1;
  }

  int ans = 0;
  // Cn = C0 * Cn-1 + C1 * Cn-2 + ... + Cn-1 * C0
  for (int i = 0; i < n; i++)
  {
    // ans += C0 * Cn-i-1
    ans += catalan(i) * catalan(n - i - 1);
  }

  return ans;
}

int main()
{
  // Print the first 10 Catalan numbers
  for (int i = 0; i <= 10; i++)
  {
    cout << "Catalan(" << i << ") = " << catalan(i) << endl;
  }
  cout << endl;
  return 0;
}