#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str2 = "hello";
  cout << str2 << endl;
  str2 = "code";
  cout << str2 << endl;

  string str;
  getline(cin, str);

  cout << "You entered: " << str << endl;
  return 0;
}

/*
getline(cin, str) is a function that reads a line of text from the standard input (cin) and stores it in the string variable str. It allows you to read an entire line of input, including spaces, until the user presses the Enter key. This is useful for reading multi-word strings or sentences from the user.
*/