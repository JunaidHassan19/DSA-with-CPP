// //Write a function to check if a number is a palindrome. (121 is a palindrome, 321 is not)

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  int original = n;
  int reversed = 0;

  while (n > 0)
  {
    int digit = n % 10;
    reversed = reversed * 10 + digit;
    n /= 10;
  }

  if (original == reversed)
  {
    cout << original << " is a palindrome." << endl;
  }
  else
  {
    cout << original << " is not a palindrome." << endl;
  }

  return 0;
}