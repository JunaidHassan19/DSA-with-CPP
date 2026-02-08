#include <iostream>
using namespace std;

int main()
{
  int Math;
  cout << "Enter the Math marks: ";
  cin >> Math;

  int Computer;
  cout << "Enter the computer marks: ";
  cin >> Computer;

  int English;
  cout << "Enter the English marks: ";
  cin >> English;

  int Avg = (Math + Computer + English) / 3;

  cout << "The Average Marks are: " << Avg;

  return 0;
}