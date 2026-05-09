#include <iostream>
#include <unordered_map>
using namespace std;

// Unordered Maps in C++ STL
int main()
{
  unordered_map<string, int> m;

  m["apple"] = 10;
  m["banana"] = 10;
  m["orange"] = 30;
  m["grape"] = 50;
  m["berry"] = 60;

  for (pair<string, int> fruits : m)
  {
    cout << fruits.first << ", " << fruits.second << endl;
  }

  if (m.count("apple"))
  {
    cout << "Exists" << endl;
  }
  else
  {
    cout << "Not Exists" << endl;
  }

  m.erase("apple");

  return 0;
}