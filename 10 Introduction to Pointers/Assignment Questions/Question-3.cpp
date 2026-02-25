/*
What will be the output of the following code:
*/

#include <iostream>
using namespace std;

int main()
{
  int a = 23;
  int *ptr = &a;

  char ch = 'A';
  char &cho = ch;

  cho += a;
  *ptr += ch;
  cout << a << ", " << ch << endl;
}

/*
output:
129,a
*/