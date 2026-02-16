#include <iostream>
using namespace std;

// Pattern 1
/*
int main()
{
  // int n = 4;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= n; j++)
  //   {
  //     cout << i << " ";
  //   }
  //   cout << endl;
  // }

  int n = 4;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}
*/

// Pattern 2
/*
int main()
{
  int n = 4;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
*/

// Pattern 3
/*
int main()
{
  // int n = 4;
  // for (int i = 0; i <= n; i++)
  // {
  //   for (int j = 0; j <= n - i; j++)
  //   {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  int n = 4;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
*/

// Pattern 4
/*
int main()
{
  int n = 4;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    cout << endl;
  }
  return 0;
}
*/

// Pattern 5
/*
int main()
{
  // int n = 4;
  // char ch = 'A';
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= i; j++)
  //   {
  //     cout << ch;
  //     ch++;
  //   }
  //   cout << endl;
  // }

  int n = 4;
  char ch = 'A';
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << ch;
      ch++;
    }
    cout << endl;
  }

  return 0;
}
*/
