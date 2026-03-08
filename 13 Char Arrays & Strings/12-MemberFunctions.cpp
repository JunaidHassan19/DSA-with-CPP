#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str = "HelloWorld!";
  // length() function returns the number of characters in the string, excluding the null terminator. It is a member function of the string class and can be used to determine the size of a string.
  cout << str.length() << endl;

  // at() function is a member function of the string class in C++. It is used to access a specific character in a string based on its index. The at() function takes an integer index as an argument and returns the character at that index. If the index is out of range, it throws an out_of_range exception.
  cout << str.at(5) << endl;
  cout << str[5] << endl;

  // substr(pos, len) function is a member function of the string class in C++. It is used to extract a substring from a given string. The function takes two parameters: pos, which specifies the starting position of the substring, and len, which specifies the length of the substring. The function returns a new string that contains the characters from the original string starting at position pos and continuing for len characters. If pos is greater than the length of the string, the function throws an out_of_range exception.
  cout << str.substr(1, 5) << endl;

  // find() function is a member function of the string class in C++. It is used to search for a specific substring within a string. The function takes a string as an argument and returns the index of the first occurrence of that substring in the original string. If the substring is not found, it returns string::npos, which is a constant representing the maximum possible value for an index.
  string str2 = "DSA in C++, Hello World!";
  cout << str2.find("Hello") << endl;  // Since "Hello" is present in str2, it will return the index of the first occurrence of "Hello" in str2, which is 14.
  cout << str2.find("Python") << endl; // Since "Python" is not present in str2, it will return string::npos, which is typically represented as -1 when printed.
  return 0;
}