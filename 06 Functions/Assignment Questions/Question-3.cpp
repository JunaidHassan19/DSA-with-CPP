// Question  : Write a function which takes 2 numbers as parameters (a & b) and output : a^2 + b^2 + 2*ab

#include <iostream>
using namespace std;

int sq(int a, int b) // function to calculate a^2 + b^2 + 2*ab
{
  int result = a * a + b * b + 2 * a * b; // calculate the result
  return result;
}

int main()
{
  int a;
  int b;
  cout << sq(2, 4) << endl;
}

/*
logic: a^2 + b^2 + 2*ab = (a + b)^2
so we can calculate (a + b)^2 instead of calculating a^2, b^2 and 2*ab separately.

output: 36
*/