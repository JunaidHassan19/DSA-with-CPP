#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
using namespace std;

// Dijkstra's Algorithm for Shortest Path in a Weighted Graph - tc: O(E log V) - sc: O(V)
class Edge
{
public:
  int v;
  int wt;

  Edge(int v, int wt)
  {
    this->v = v;
    this->wt = wt;
  }
};

int main()
{
  int V = 6;
  vector<vector<Edge>> graph(V);

  graph[0].push_back(Edge(1, 2));
  graph[0].push_back(Edge(2, 4));

  graph[0].push_back(Edge(2, 1));
  graph[0].push_back(Edge(3, 7));

  graph[0].push_back(Edge(4, 3));

  graph[0].push_back(Edge(5, 1));

  graph[0].push_back(Edge(3, 2));
  graph[0].push_back(Edge(2, 5));

  return 0;
}