#include <iostream>
#include <unordered_set>
using namespace std;

// Unordered Sets in C++ STL
int main()
{
  unordered_set<int> s;
  s.insert(1);
  s.insert(5);
  s.insert(3);
  s.insert(2);
  s.insert(1);
  s.insert(1);
  s.insert(1);

  cout << s.size() << endl; // Output: 4 (duplicate insertions are ignored)

  if (s.find(5) != s.end())
  {
    cout << "Found" << endl; // Output: Found
  }
  else
  {
    cout << "Not Found" << endl;
  }

  s.erase(3); // Remove the element 3 from the set
  for (auto it : s)
  {
    cout << it << " "; // Output: 1 2 5 (order may vary)
  }
}