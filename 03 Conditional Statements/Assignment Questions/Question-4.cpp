// What’ll be the output of the program:
#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  if (++a * 5 <= 25)
  {
    cout << "Hello\n";
  }
  else
  {
    cout << "Bye\n";
  }
  return 0;
}

/*
pre-increment operator (++a) increments the value of 'a' before it is used in the expression. So, 'a' becomes 6 before the multiplication. The expression evaluates to 6 * 5 = 30, which is not less than or equal to 25. Therefore, the output will be "Bye".
*/