#include <iostream>
using namespace std;

int main()
{
  char ch = 'a';
  char ch1 = 'b';
  char ch2 = 'J';
  char ch3 = 'S';
  char ch4 = '$';
  char ch5 = '*';
  char ch6 = '\n';

  cout << ch3 << endl;
  cout << (int)ch3 << endl;

  int pos = ch3 - 'A';
  cout << pos << endl;

  return 0;
}