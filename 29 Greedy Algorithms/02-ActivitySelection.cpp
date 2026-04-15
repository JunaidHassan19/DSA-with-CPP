#include <iostream>
#include <vector>
using namespace std;

// Activity Selection Problem
int maxActivities(vector<int> start, vector<int> end)
{
  int count = 1;
  cout << "Selecting A0" << endl;
  int currEndTime = end[0];

  // We start from the second activity (index 1) since we have already selected the first one (index 0)
  for (int i = 1; i < start.size(); i++)
  {
    if (start[i] >= currEndTime) // If the start time of the current activity is greater than or equal to the end time of the last selected activity, we can select it
    {
      cout << " Selecting A" << i << endl;
      count++;              // Increment the count of selected activities
      currEndTime = end[i]; // Update the current end time to the end time of the newly selected activity
    }
  }
  return count;
}

int main()
{
  vector<int> start = {1, 3, 0, 5, 8, 5};
  vector<int> end = {2, 4, 6, 7, 9, 9};

  cout << maxActivities(start, end) << endl;

  return 0;
}

/*
Logic:
1. We start by selecting the first activity (A0) and initialize the count to 1.
2. We keep track of the end time of the last selected activity (currEndTime).
3. For each subsequent activity, if its start time is greater than or equal to the current end time, we select it and update the current end time.
4. We return the total count of selected activities.
Time Complexity: O(n), where n is the number of activities.
*/