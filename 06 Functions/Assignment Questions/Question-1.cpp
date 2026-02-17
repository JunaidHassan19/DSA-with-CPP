// //Write a function to check if a number is a palindrome. (121 is a palindrome, 321 is not)

#include <iostream>
using namespace std;

// Function to reverse a number
int reverse(int n)
{
  int res = 0; // variable to store the reversed number
  while (n > 0)
  {
    int lastDig = n % 10;     // get the last digit of the number
    res = res * 10 + lastDig; // add the last digit to the reversed number
    n = n / 10;               // remove the last digit from the number
  }
  return res;
}
// Function to check if a number is a palindrome
bool isPalindrome(int num)
{
  int revNum = reverse(num); // get the reversed number
  return num == revNum;      // check if the original number is equal to the reversed number
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (isPalindrome(n))
    cout << n << " is a palindrome" << endl;
  else
    cout << n << " is not a palindrome" << endl;

  return 0;
}

/*
logic: A number is a palindrome if it reads the same backward as forward. To check if a number is a palindrome, we can reverse the number and compare it with the original number. If they are the same, then the number is a palindrome.
output: If the input is 121, the output will be "121 is a palindrome". If the input is 321, the output will be "321 is not a palindrome".
*/