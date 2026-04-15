#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Pair in C++
bool compare(pair<int, int> p1, pair<int, int> p2)
{
  return p1.second < p2.second; // Ascending - end
  // return p1.second > p2.second; // Descending - end
  // return p1.first < p2.first; // Ascending - start
  // return p1.first > p2.first; // Descending - start
}

int main()
{
  // We can also use pair to store the start and end times of activities instead of using two separate vectors.
  vector<pair<int, int>> activity(3, make_pair(0, 0));

  activity[0] = make_pair(0, 9); // A0: start = 0, end = 9
  activity[1] = make_pair(1, 2); // A1: start = 1, end = 2
  activity[2] = make_pair(2, 4); // A2: start = 2, end = 4

  // Before sorting, the activities are in the order they were added to the vector.
  cout << "Before Sorting: " << endl;
  for (int i = 0; i < activity.size(); i++)
  {
    cout << "A" << i << ": " << activity[i].first << ", " << activity[i].second << endl;
  }

  // We can sort the activities based on their end times using the compare function defined above.S
  sort(activity.begin(), activity.end(), compare);

  cout << "After Sorting: " << endl;

  // After sorting, the activities will be ordered based on their end times in ascending order.
  for (int i = 0; i < activity.size(); i++)
  {
    cout << "A" << i << ": " << activity[i].first << ", " << activity[i].second << endl;
  }
  return 0;
}