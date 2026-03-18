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
