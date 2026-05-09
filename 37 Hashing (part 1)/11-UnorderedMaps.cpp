#include <iostream>
#include <unordered_map>
using namespace std;

// Unordered Maps in C++ STL
int main()
{
  // Create an unordered map that maps strings (fruit names) to integers (quantities)
  unordered_map<string, int> m; // TC: O(1) on average, O(n) in worst case

  m["apple"] = 10; // Insert key-value pairs into the unordered map
  m["banana"] = 10;
  m["orange"] = 30;
  m["grape"] = 50;
  m["berry"] = 60;
  m["berry"] = 70; // Update the value for the key "berry" to 70

  // Iterate over the unordered map and print each key-value pair
  for (pair<string, int> fruits : m)
  {
    cout << fruits.first << ", " << fruits.second << endl;
  }

  // Check if the key "apple" exists in the unordered map and print "Exists" if it does, otherwise print "Not Exists"
  if (m.count("apple"))
  {
    cout << "Exists" << endl;
  }
  else
  {
    cout << "Not Exists" << endl;
  }

  // Remove the key "apple" from the unordered map if it exists
  m.erase("apple");
  cout << "After removing apple" << endl;
  for (pair<string, int> fruits : m)
  {
    cout << fruits.first << ", " << fruits.second << endl;
  }

  return 0;
}