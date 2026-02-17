// Question 4: Write a function that prints the largest of 3 numbers.
#include <iostream>
using namespace std;
int largest(int a, int b, int c)
{
  if (a > b && a > c)
  {
    return a;
  }
  else if (b > a && b > c)
  {
    return b;
  }
  else
  {
    return c;
  }
}

int main()
{
  int a, b, c;

  cout << largest(6, 8, 4) << endl;
}