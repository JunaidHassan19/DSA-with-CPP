#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Nearby Cars - TC: O(n log n) - SC: O(n)
class Car
{
public:
  int idx;
  int distSq;

  Car(int idx, int distSq)
  {
    this->idx = idx;
    this->distSq = distSq;
  }

  // Overloading the less than operator to compare cars based on their distance from the origin
  bool operator<(const Car &obj) const
  {
    return this->distSq > obj.distSq;
  }
};

// Function to find the K nearest cars to the origin (0, 0)
void nearbyCar(vector<pair<int, int>> pos, int K)
{
  vector<Car> cars;

  // Calculate the squared distance of each car from the origin and store it in a vector of Car objects
  for (int i = 0; i < pos.size(); i++) // tc O(n)
  {
    int distSq = (pos[i].first * pos[i].first) + (pos[i].second * pos[i].second);
    cars.push_back(Car(i, distSq));
  }

  priority_queue<Car> pq(cars.begin(), cars.end()); // tc O(n)

  // Extract the K nearest cars from the priority queue and print their indices
  for (int i = 0; i < K; i++) // tc O(k log n)
  {
    cout << "Car " << pq.top().idx << endl;
    pq.pop();
  }
}

int main()
{
  vector<pair<int, int>> pos;
  pos.push_back(make_pair(3, 3));
  pos.push_back(make_pair(5, -1));
  pos.push_back(make_pair(-2, 4));

  int k = 2;

  nearbyCar(pos, k);

  return 0;
}