#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Weakest Soldier - TC: O(m log n) - SC: O(n)
class Row
{
public:
  int count;
  int idx;

  Row(int count, int idx)
  {
    this->count = count;
    this->idx = idx;
  }

  // Overloading the less than operator to compare rows based on the number of soldiers (1s) and their indices
  bool operator<(const Row &obj) const
  {
    if (this->count == obj.count) // If the count of soldiers is the same, compare based on the index
    {
      return this->idx > obj.idx;
    }
    return this->count > obj.count; // Compare based on the count of soldiers (1s) in descending order
  }
};

// Function to find the K weakest rows in the matrix based on the number of soldiers (1s) in each row
void weakestSoldier(vector<vector<int>> matrix, int K)
{
  vector<Row> rows;
  for (int i = 0; i < matrix.size(); i++)
  {
    int count = 0;
    for (int j = 0; j < matrix[i].size() && matrix[i][j] == 1; j++)
    {
      count++;
    }
    rows.push_back(Row(count, i));
  }
  // Create a priority queue (min heap) to store the rows based on their strength (number of soldiers)
  priority_queue<Row> pq(rows.begin(), rows.end());

  for (int i = 0; i < K; i++)
  {
    cout << "Row" << pq.top().idx << endl;
    pq.pop();
  }
}

int main()
{
  vector<vector<int>> matrix = {{1, 0, 0, 0},
                                {1, 1, 1, 1},
                                {1, 0, 0, 0},
                                {1, 0, 0, 0}};

  weakestSoldier(matrix, 2);
  return 0;
}