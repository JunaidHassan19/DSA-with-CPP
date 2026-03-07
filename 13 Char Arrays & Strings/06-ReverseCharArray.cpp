#include <iostream>
#include <cstring>
using namespace std;

void reverse(char word[], int n)
{
  int st = 0;
  int end = n - 1;
  while (st < end)
  {
    swap(word[st], word[end]);
    st++;
    end--;
  }
}

int main()
{
  char word[] = "code";

  reverse(word, strlen(word));
  cout << word << endl;
  return 0;
}