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

// Dijkstra's Algorithm for Shortest Path in a Weighted Graph - tc: O(E log V) - sc: O(V)
void dijkstra(int src, vector<vector<Edge>> graph, int V)
{
  // Min Heap to store (distance, vertex) pairs
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

  // Distance vector initialized to infinity
  vector<int> dist(V, INT_MAX);
  pq.push(make_pair(0, src)); // Push the source vertex with distance 0
  dist[src] = 0;

  // Process the priority queue until it's empty
  while (!pq.empty())
  {
    int u = pq.top().second;
    pq.pop();

    vector<Edge> edges = graph[u];
    // Relaxation step for all adjacent edges of vertex u
    for (Edge e : edges)
    {
      if (dist[e.v] > dist[u] + e.wt)
      {
        dist[e.v] = dist[u] + e.wt;
        pq.push(make_pair(dist[e.v], e.v));
      }
    }
  }

  // Print the shortest distances from the source vertex
  for (int d : dist)
  {
    cout << d << " ";
  }
  cout << endl;
}

int main()
{
  int V = 6;
  vector<vector<Edge>> graph(V);

  graph[0].push_back(Edge(1, 2));
  graph[0].push_back(Edge(2, 4));

  graph[1].push_back(Edge(2, 1));
  graph[1].push_back(Edge(3, 7));

  graph[2].push_back(Edge(4, 3));
  graph[3].push_back(Edge(5, 1));

  graph[4].push_back(Edge(3, 2));
  graph[4].push_back(Edge(2, 5));

  dijkstra(0, graph, V);
  return 0;
}