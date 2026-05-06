#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Connect N Ropes - TC: O(n log n) - SC: O(n)
int connectNRopes(vector<int> ropes)
{
  // Create a min heap (priority queue) to store the lengths of the ropes
  priority_queue<int, vector<int>, greater<int>> pq(ropes.begin(), ropes.end());
  int cost = 0;

  while (pq.size() > 1)
  {
    int min1 = pq.top(); // Get the shortest rope
    pq.pop();            // Remove the shortest rope from the heap
    int min2 = pq.top(); // Get the second shortest rope
    pq.pop();            // Remove the second shortest rope from the heap

    cost += min1 + min2;  // Add the cost of connecting the two ropes to the total cost
    pq.push(min1 + min2); // Push the new rope (result of connecting the two ropes) back into the heap
  }

  cout << "Min cost = " << cost << endl;
  return cost;
}

int main()
{
  vector<int> ropes = {4, 3, 2, 6};
  connectNRopes(ropes);

  return 0;
}