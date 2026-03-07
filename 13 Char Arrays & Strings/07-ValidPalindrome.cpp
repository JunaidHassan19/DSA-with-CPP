#include <iostream>
#include <cstring>
using namespace std;
bool isPalindrome(char word[], int n)
{
  int st = 0;
  int end = n - 1;
  while (st < end)
  {
    if (word[st] != word[end])
    {
      cout << "Not a Palindrome" << endl;
      return false;
    }
    st++;
    end--;
  }
  cout << "Palindrome" << endl;
  return true;
}

int main()
{
  char word[] = "racecar";
  isPalindrome(word, strlen(word));
  return 0;
}