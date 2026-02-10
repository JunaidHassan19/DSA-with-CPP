/*
Create an Income Tax Calculator.

Income <5L -> 0% tax
Income 5L to 10L -> 20% tax
Income <10L -> 30% tax
*/

#include <iostream>
using namespace std;

int main()
{
  int Income;
  float tax;
  cout << "Enter you Income(In L): ";
  cin >> Income;

  if (Income < 5L)
  {
    tax = 0;
  }
  else if (Income <= 10L)
  {
    tax = 0.2 * Income;
  }
  else
  {
    tax = 0.3 * Income;
  }

  cout << "Tax = " << (tax * 100000) << endl;
  return 0;
}