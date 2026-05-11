#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

// Count Distinct Elements in an Array
int countDistinct(vector<int> arr)
{
  unordered_set<int> s;

  for (int i = 0; i < arr.size(); i++)
  {
    s.insert(arr[i]); // insert will only add the element if it is not already present in the set
  }

  // print the distinct elements
  cout << "Distinct elements: ";
  for (int el : s)
  {
    cout << el << " ";
  }
  cout << endl;
  return s.size();
}

int main()
{
  vector<int> arr = {4, 3, 2, 5, 6, 7, 3, 4, 2, 1};

  cout << countDistinct(arr) << endl;
  return 0;
}