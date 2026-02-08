/*
Question 3: Build a Simple Interest Calculator.
            Input: principal(P), rate(R), time(t)
            Output: (P*R*T) / 100
*/
#include <iostream>
using namespace std;

int main()
{
  float principal, rate, time;
  cout << "Enter Principal: ";
  cin >> principal;

  cout << "Enter Rate: ";
  cin >> rate;

  cout << "Enter Time: ";
  cin >> time;

  float SI = (principal * rate * time) / 100.0;

  cout << "SI: " << SI << endl;
}