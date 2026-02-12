#include <iostream>
using namespace std;

int main()
{
  /*
  Question : Print the Square pattern using for loop.
                  * * * * *
                  * * * * *
                  * * * * *
                  * * * * *
  */
  for (int i = 1; i <= 5; i++)
  {
    cout << "* * * * * " << endl;
  }

  /*
  Print Numbers from N to 1 using for loop
  */
  int n;
  cout << "Enter a Number: ";
  cin >> n;
  for (int i = n; i > 0; i--)
  {
    cout << i << " ";
  }

  /*
  output: Enter a Number: 5
          5 4 3 2 1
  */

  return 0;
}