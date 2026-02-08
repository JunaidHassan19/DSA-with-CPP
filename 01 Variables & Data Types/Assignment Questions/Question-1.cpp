/*
Question 1: In a program, input the side of a square.You have to output the area of the square.
Input: n(side)
Output: n*n(area)
*/

#include <iostream>
using namespace std;

int main()
{
  int side;
  cout << "Enter the Side: ";
  cin >> side;

  int Area = side * side;

  cout << "The Area of the Square is " << Area;

  return 0;
}