#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str = "Apna College";
  // Traditional for loop to iterate through each character in the string
  for (int i = 0; i < str.length(); i++)
  {
    cout << str[i] << " ";
  }
  cout << endl;
  // Range-based for loop (for-each loop) to iterate through each character in the string
  for (char ch : str)
  {
    cout << ch << " ";
  }

  return 0;
}