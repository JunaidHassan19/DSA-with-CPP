#include <iostream>
#include <cstring>
using namespace std;

// toUpperCase And toLowerCase
/*
// void toUpper(char word[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     char ch = word[i];
//     if (ch >= 'A' && ch <= 'Z')
//     {
//       continue;
//     }
//     else
//     {
//       word[i] = ch - 'a' + 'A';
//     }
//   }
// }

// void toUpper(char word[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     char ch = word[i];
//     if (ch >= 'A' && ch <= 'Z')
//     {
//       continue;
//     }
//     else
//     {
//       word[i] = ch - 'a' + 'A';
//     }
//   }
// }

// void toUpper(char word[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     char ch = word[i];
//     {
//       if (ch >= 'A' && ch <= 'Z')
//       {
//         continue;
//       }
//       else
//       {
//         word[i] = ch - 'a' + 'A';
//       }
//     }
//   }
// }

// void toLower(char word[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     char ch = word[i];
//     if (ch >= 'a' && ch <= 'z')
//     {
//       continue;
//     }
//     else
//     {
//       word[i] = ch - 'A' + 'a';
//     }
//   }
// }

void toLower(char word[], int n)
{
  for (int i = 0; i < n; i++)
  {
    char ch = word[i];
    if (ch >= 'a' && ch <= 'z')
    {
      continue;
    }
    else
    {
      word[i] = ch - 'A' + 'a';
    }
  }
}

int main()
{
  char word[] = "baNanA";

  // toUpper(word, strlen(word));
  toLower(word, strlen(word));
  cout << word << endl;

  return 0;
}
*/

// ReverseCharArray
/*

// void reverse(char arr[], int n)
// {
//   int st = 0;
//   int end = n - 1;
//   while (st < end)
//   {
//     swap(arr[st], arr[end]);
//     st++;
//     end--;
//   }
// }

// void reverse(char word[], int n)
// {
//   int st = 0;
//   int end = n - 1;
//   while (st < end)
//   {
//     swap(word[st], word[end]);
//     st++;
//     end--;
//   }
// }

// void reverse(char word[], int n)
// {
//   int st = 0;
//   int end = n - 1;
//   while (st < end)
//   {
//     swap(word[st], word[end]);
//     st++;
//     end--;
//   }
// }

// reverse only the vowels

// void reverseVowels(char word[], int n)
// {
//   int st = 0;
//   int end = n - 1;
//   while (st < end)
//   {
//     while (st < end && word[st] != 'a' && word[st] != 'e' && word[st] != 'i' && word[st] != 'o' && word[st] != 'u')
//     {
//       st++;
//     }
//     while (st < end && word[end] != 'a' && word[end] != 'e' && word[end] != 'i' && word[end] != 'o' && word[end] != 'u')
//     {
//       end--;
//     }
//     if (st < end)
//     {
//       swap(word[st], word[end]);
//       st++;
//       end--;
//     }
//   }
// }

// void reverseVowels(char word[], int n)
// {
//   int st = 0;
//   int end = n - 1;
//   while (st < end)
//   {
//     while (st < end && word[st] != 'a' && word[st] != 'e' && word[st] != 'i' && word[st] != 'o' && word[st] != 'u')
//     {
//       st++;
//     }
//     while (st < end && word[end] != 'a' && word[end] != 'e' && word[end] != 'i' && word[end] != 'o' && word[end] != 'u')
//     {
//       end--;
//     }
//     if (st < end)
//     {
//       swap(word[st], word[end]);
//       st++;
//       end--;
//     }
//   }
// }

// void reverseVowels(char word[], int n)
// {
//   int st = 0;
//   int end = n - 1;
//   while (st < end)
//   {
//     while (st < end && word[st] != 'a' && word[st] != 'e' && word[st] != 'i' && word[st] != 'o' && word[st] != 'u')
//     {
//       st++;
//     }
//     {
//       while (st < end && word[end] != 'a' && word[end] != 'e' && word[end] != 'i' && word[end] != 'o' && word[end] != 'u')
//       {
//         end--;
//       }
//     }
//     if (st < end)
//     {
//       swap(word[st], word[end]);
//       st++;
//       end--;
//     }
//   }
// }



int main()
{
  char word[] = "abcdef";
  // reverse(word, strlen(arr));
  reverseVowels(word, strlen(word));
  cout << word << endl;

  return 0;
}

*/

// ValidPalindrome

// bool isPalindrome(char word[], int n)
// {
//   int st = 0;
//   int end = n - 1;
//   while (st < end)
//   {
//     if (word[st] != word[end])
//     {
//       cout << "Not Palindrome" << endl;
//       return 0;
//     }
//     st++;
//     end--;
//   }
//   cout << "Valid palindrome" << endl;
//   return true;
// }

// bool isPalindrome(char word[], int n)
// {
//   int st = 0;
//   int end = n - 1;
//   while (st < end)
//   {
//     if (word[st] != word[end])
//     {
//       cout << "Not Palindrome" << endl;
//       return false;
//     }
//     st++;
//     end--;
//   }
//   cout << "Palindrome" << endl;
//   return true;
// }

bool isPalindrome(char word[], int n)
{
  int st = 0;
  int end = n - 1;
  while (st < end)
  {
    if (word[st] != word[end])
    {
      cout << "Not palindrome" << endl;
      return false;
    }
    st++;
    end--;
  }
  cout << "palindrome" << endl;
  return true;
}

int main()
{
  char word[] = "junninnuj";
  cout << word << " Is a " << isPalindrome(word, strlen(word));

  return 0;
}