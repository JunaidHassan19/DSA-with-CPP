/*
Question 4 : Write a program to calculate the area of a circle.
             Input : r(radus)
             Output : PI * r * r (area)
*/
#include <iostream>
using namespace std;

int main()
{
  float radus;
  cout << "Enter the Radus: ";
  cin >> radus;

  float PI = 3.14159;

  cout << "The Area of the Circle is " << PI * radus * radus;

  return 0;
}