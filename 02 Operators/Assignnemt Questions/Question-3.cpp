/*
Question 3: What'll be the output of the following programs:
*/
#include <iostream>
using namespace std;

int main()
{
  int x = 200, y = 50, z = 100;

  if (x > y && y > z)
  {
    cout << "Hello\n"; // This condition is false, so "Hello" will not be printed.
  }
  if (z > y && z < x)
  {
    cout << "C++\n"; // This condition is true, so "C++" will be printed.
  }
  if ((y + 200) < x && (y + 150) < z)
  {
    cout << "HelloC++\n"; // This condition is false, so "HelloC++" will not be printed.
  }
  return 0;
}

// Output:
// C++