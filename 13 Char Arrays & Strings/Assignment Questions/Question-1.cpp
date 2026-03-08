#include <iostream>
#include <string>
using namespace std;

// Question 1: Count how many times lowercase vowels occurred in a string entered by the user.

void countVowels(string str)
{
  int count = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    {
      count++;
    }
  }
  cout << "There are " << count << " Vowels in string";
}

int main()
{
  string str;
  cout << "Enter String: ";
  getline(cin, str);

  countVowels(str);
  return 0;
}