/*
Question: Print Sum of Natural numbers
*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a Number: ";
  cin >> n;
  int sum = 0; // Variable to store the sum of natural numbers
  for (int i = 1; i <= n; i++)
  {
    cout << i << " ";
    sum = sum + i; // Add current number i to the sum
  }
  cout << endl;
  cout << "The Sum of Natural Numbers: " << sum;
  return 0;
}
/*
Output: Enter a Number: 5
        1 2 3 4 5
        The Sum of Natural Numbers: 15
*/