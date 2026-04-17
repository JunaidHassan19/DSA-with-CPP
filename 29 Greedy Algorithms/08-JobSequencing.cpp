#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Job Sequencing Problem
bool compare(pair<int, int> p1, pair<int, int> p2)
{
  return p1.second > p2.second; // Sort in descending order based on profit
}

int maxProfit(vector<pair<int, int>> jobs)
{
  sort(jobs.begin(), jobs.end(), compare);

  int profit = jobs[0].second;
  int safeDedline = 2;

  for (int i = 1; i < jobs.size(); i++)
  {
    if (jobs[i].first >= safeDedline)
    {
      profit += jobs[i].second;
      safeDedline++;
    }
  }
  cout << "Maximum profit = " << profit << endl;
  return profit;
}

int main()
{
  int n = 4;
  vector<pair<int, int>> jobs(n, make_pair(0, 0));

  jobs[0] = make_pair(4, 20); // Job 1: deadline = 4, profit = 20
  jobs[1] = make_pair(1, 10); // Job 2: deadline = 1, profit = 10
  jobs[2] = make_pair(1, 40); // Job 3: deadline = 1, profit = 40
  jobs[3] = make_pair(1, 30); // Job 4: deadline = 1, profit = 30

  maxProfit(jobs);
  return 0;
}