/*
Question 1 A: What'll be the output of the following programs:
*/
#include<iostream>
using namespace std;

int main() {
  int x = 2, y = 5;

  int exp1 = (x * y / x);

  int exp2 = (x * (y / x));

  cout << exp1 << ",";//5

  cout << exp2 << endl;//4
  return 0;
}

  // In exp1, the operations are performed from left to right:
  // 1. x * y = 2 * 5 = 10
  // 2. 10 / x = 10 / 2 = 5

  // In exp2, the operations inside the parentheses are performed first:
  // 1. y / x = 5 / 2 = 2 (integer division)
  // 2. x * 2 = 2 * 2 = 4

  // Therefore, the output of the program will be:
  // 5,4
