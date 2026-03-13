#include <iostream>
using namespace std;

// Static keyword example -Function to demonstrate static variable usage
void counter()
{
  static int count = 0; // Static variable to keep track of the count across function calls
  count++;
  cout << "count: " << count << endl;
}

int main()
{
  counter(); // Output: count: 1
  counter(); // Output: count: 2
  counter(); // Output: count: 3
  counter(); // Output: count: 4
  return 0;
}