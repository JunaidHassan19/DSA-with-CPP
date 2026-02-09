/*
Question 2: What'll be the output of the following programs:
*/
#include<iostream>
using namespace std;

int main(){
  int x = 10, y = 5;

  int exp1 = (y * ( x / y + x / y));
  int exp2 = (y * x / y + y * x / y);

  cout << exp1 <<" ";//20
  cout << exp2 <<"\n";//20

  return 0;
}
// In exp1, the operations inside the parentheses are performed first:
// 1. x / y = 10 / 5 = 2
// 2. x / y = 10 / 5 = 2
// 3. 2 + 2 = 4 
// 4. y * 4 = 5 * 4 = 20

// In exp2, the operations are performed from left to right:
// 1. y * x = 5 * 10 = 50
// 2. 50 / y = 50 / 5 = 10
// 3. y * x = 5 * 10 = 50 
// 4. 50 / y = 50 / 5 = 10
// 5. 10 + 10 = 20

// Therefore, the output of the program will be:
// 20 20