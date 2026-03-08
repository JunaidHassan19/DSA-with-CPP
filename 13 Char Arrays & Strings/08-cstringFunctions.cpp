#include <iostream>
#include <cstring> // for string functions
using namespace std;

int main()
{
  // strcpy(dest, src): copies the string pointed to by src, including the null character, to the array pointed to by dest. The strings may not overlap, and the destination string dest must be large enough to receive the copy. This function returns a pointer to the destination string dest.
  char str1[100];
  char str2[100] = "DSA";
  // strcpy(str1, "code");
  strcpy(str1, str2);
  cout << str1 << endl;

  // strcat(str1, str2): appends the string pointed to by src to the end of the string pointed to by dest. The first character of src overwrites the null character at the end of dest. The strings may not overlap, and the destination string dest must have enough space for the result. This function returns a pointer to the resulting string dest.
  char str3[] = "Hello";
  char str4[] = " code";
  strcat(str3, str4);
  cout << str3 << endl;

  // strcmp(str1, str2): compares the string pointed to by str1 with the string pointed to by str2. The function returns an integer less than, equal to, or greater than zero if the string pointed to by str1 is found, respectively, to be less than, to match, or be greater than the string pointed to by str2.
  char str5[] = "xyz";
  char str6[] = "abc";
  cout << strcmp(str5, str6) << endl;

  return 0;
}