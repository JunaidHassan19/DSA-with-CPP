#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

// Union and Intersection of Two Arrays

// Union of two arrays is the set of distinct elements present in either of the two arrays.
void printUnion(vector<int> arr1, vector<int> arr2) // tc = O(n1 + n2)
{
  unordered_set<int> s;

  for (int el : arr1)
  {
    s.insert(el);
  }

  for (int el : arr2)
  {
    s.insert(el);
  }

  for (int el : s)
  {
    cout << el << " ";
  }
  cout << endl;
}

// Intersection of two arrays is the set of distinct elements present in both of the two arrays.
void printIntersection(vector<int> arr1, vector<int> arr2) // tc = O(n1 + n2)
{
  unordered_set<int> s;

  for (int el : arr1)
  {
    s.insert(el);
  }

  for (int el : arr2)
  {
    if (s.find(el) != s.end())
    {
      cout << el << " ";
      s.erase(el);
    }
  }
  cout << endl;
}

int main()
{
  vector<int> arr1 = {7, 3, 9};
  vector<int> arr2 = {6, 3, 9, 2, 9, 4};

  cout << "Union : ";
  printUnion(arr1, arr2);

  cout << "Intersection : ";
  printIntersection(arr1, arr2);
  return 0;
}