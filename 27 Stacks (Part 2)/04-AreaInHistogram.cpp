#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

// Area in Histogram
void mexAreaHistogram(vector<int> height)
{
  int n = height.size();
  vector<int> nsl(n);
  vector<int> nsr(n);
  stack<int> s;

  // Next Smaller left
  nsl[0] = -1;
  s.push(0);
  for (int i = 1; i < height.size(); i++)
  {
    int curr = height[i];
    while (!s.empty() && curr <= height[s.top()])
    {
      s.pop();
    }
    if (s.empty())
    {
      nsl[i] = -1;
    }
    else
    {
      nsl[i] = s.top();
    }
    s.push(i);
  }

  while (!s.empty())
  {
    s.pop();
  }

  // Next Smaller right
  s.push(n - 1);
  nsr[n - 1] = n;
  for (int i = n - 2; i >= 0; i--)
  {
    int curr = height[i];

    while (!s.empty() && curr <= height[s.top()])
    {
      s.pop();
    }

    if (s.empty())
    {
      nsr[i] = n;
    }
    else
    {
      nsr[i] = s.top();
    }

    s.push(i);
  }

  // Calculate area
  int maxArea = 0;
  for (int i = 0; i < n; i++)
  {
    int ht = height[i];
    int width = nsr[i] - nsl[i] - 1;
    int area = ht * width;

    maxArea = max(area, maxArea);
  }
  cout << "Max area of histogram : " << maxArea << endl;
}

int main()
{
  vector<int> height = {2, 1, 5, 6, 2, 3};
  mexAreaHistogram(height);
  return 0;
}

/*
Logic - Area in Histogram
1. Find the next smaller element on the left side of each bar in the histogram and store their indices in an array called nsl (next smaller left).
2. Find the next smaller element on the right side of each bar in the histogram and store their indices in an array called nsr (next smaller right).
3. Calculate the area for each bar using the formula: area = height[i] * (nsr[i] - nsl[i] - 1), where height[i] is the height of the current bar, nsr[i] is the index of the next smaller element on the right, and nsl[i] is the index of the next smaller element on the left.
4. Keep track of the maximum area encountered during the calculations and return it as the result.

time complexity : O(n) - We traverse the histogram bars twice (once for finding next smaller elements and once for calculating areas), resulting in a linear time complexity.
space complexity : O(n) - We use additional space to store the indices of the next smaller elements on both sides, which requires O(n) space.
*/