#include <iostream>
using namespace std;
/*
Qs. Sort this array of characters using inserting sort in decending order.
       char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'}
*/

void print(char ch[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << ch[i] << ", ";
  }
}

void insertSort(char ch[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int curr = ch[i];
    int prev = i - 1;

    while (prev >= 0 && ch[prev] < curr)
    {
      swap(ch[prev], ch[prev + 1]);
      prev--;
    }
    ch[prev + 1] = curr;
  }
  print(ch, n);
}

int main()
{
  char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
  int n = sizeof(ch) / sizeof(char);

  insertSort(ch, n);
  return 0;
}