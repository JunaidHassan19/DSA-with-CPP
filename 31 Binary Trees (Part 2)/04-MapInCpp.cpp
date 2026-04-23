#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
  // map<KeyType, ValueType>
  // Stores key-value pairs in sorted order of keys.
  map<int, string> m;

  // Insert key-value pairs into the map.
  m[100] = "Junni";
  m[110] = "jay";
  m[120] = "Junni";

  // If a key already exists, assigning again updates its value.
  // So value for key 100 changes from "Junni" to "Dar".
  m[100] = "Dar";

  // Access values using their keys.
  cout << m[100] << endl;
  cout << m[110] << endl;
  cout << m[120] << endl;

  // count(key) returns:
  // 1 if key exists, 0 if key does not exist (for map with unique keys).
  cout << m.count(100) << endl;
  cout << m.count(200) << endl;

  // Range-based loop to print all key-value pairs.
  // Pairs come in ascending order of keys.
  for (auto it : m)
  {
    // it.first  -> key
    // it.second -> value
    cout << "Key = " << it.first << ", Value = " << it.second << endl;
  }
  return 0;
}
