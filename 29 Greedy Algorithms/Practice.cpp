#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Practice Problem: Activity Selection Problem
/*
int maxActivities(vector<int> start, vector<int> end)
{
  int count = 1;
  int currEndTime = end[0];
  for (int i = 1; i < start.size(); i++)
  {
    if (start[i] >= currEndTime)
    {
      count++;
      currEndTime = end[i];
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
*/

// Practice Pair in C++

bool complare(pair<int, int> p1, pair<int, int> p2)
{
  return p1.second > p2.second;
}

int main()
{
  vector<pair<int, int>> act(3, make_pair(0, 0));

  act[0] = make_pair(0, 9);
  act[1] = make_pair(1, 2);
  act[2] = make_pair(2, 4);

  for (int i = 0; i < act.size(); i++)
  {
    cout << "A" << i << " : " << act[i].first << ", " << act[i].second << endl;
  }

  sort(act.begin(), act.end(), complare);
  return 0;
}