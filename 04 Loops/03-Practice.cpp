/*
Print Natural Numbers 1 to N.
*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a Number: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cout << i << " ";
  }
  return 0;
}

/*
Output: Enter a Number: 5
        1 2 3 4 5
*/