#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // Create a vector and initialize it with some values
  vector<int> vec1 = {1, 2, 3, 4};
  cout << vec1.size() << endl;

  // Create a vector of size 10 with all elements initialized to -1 - fill constructor
  vector<int> vec2(10, -1);
  for (int i = 0; i < vec2.size(); i++)
  {
    cout << vec2[i] << " ";
  }
  return 0;
}

/*
Output:
4
-1 -1 -1 -1 -1 -1 -1 -1 -1 -1

*/