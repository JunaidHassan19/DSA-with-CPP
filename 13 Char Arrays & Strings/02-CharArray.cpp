#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  // Bacis

  char arr[5] = {'a', 'b', 'c', 'd', 'e'};
  cout << arr[0] << endl;
  cout << arr[1] << endl;
  cout << arr[2] << endl;
  cout << arr[3] << endl;
  cout << arr[4] << endl;

  char arr[5] = {'c', 'o', 'd', 'e', '\0'};
  cout << arr << endl;

  // Creation & Output.
  char work[] = "code";
  cout << work << endl;

  char work1[5] = "code";
  cout << work1 << endl;

  char work2[] = {'c', 'o', 'd', 'e', '\0'};
  cout << work2 << endl;

  char work3[50] = {'c', 'o', 'd', 'e', '\0'};
  cout << work3 << endl;
  cout << strlen(work) << endl;

  return 0;
}