#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Sliding Window Maximum - TC: O(n log n) - SC: O(n)
void slidingWindowMax(vector<int> arr, int K)
{
  priority_queue<pair<int, int>> pq; // Max heap to store the elements of the current window along with their indices

  // Push the first K elements of the array into the priority queue

  for (int i = 0; i < K; i++)
  {
    pq.push(make_pair(arr[i], i));
  }

  cout << "Output : " << pq.top().first << " ";

  // Iterate through the rest of the array, starting from the Kth element
  for (int i = K; i < arr.size(); i++)
  {
    while (!pq.empty() && pq.top().second <= (i - K))
    {
      pq.pop();
    }
    pq.push(make_pair(arr[i], i));
    cout << pq.top().first << " ";
  }

  cout << endl;
}

int main()
{
  vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
  int K = 3;

  slidingWindowMax(arr, K);
  return 0;
}