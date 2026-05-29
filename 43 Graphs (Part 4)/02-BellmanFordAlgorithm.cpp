#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
using namespace std;

// Bellman-Ford Algorithm for Shortest Path in a Weighted Graph - tc: O(V * E) - sc: O(V)
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

// tc: O(V * E) -worst case when all edges are relaxed in each iteration - sc: O(V)
void bellmanaFord(vector<vector<Edge>> graph, int V, int src)
{
  vector<int> dist(V, INT_MAX);
  dist[src] = 0;

  // Relaxation step repeated V-1 times
  for (int i = 0; i < V - 1; i++)
  {
    // Relaxation step for all edges in the graph
    for (int u = 0; u < V; u++)
    {
      // Relaxation step for all adjacent edges of vertex u
      for (Edge e : graph[u])
      {
        // Relax the edge if a shorter path is found
        if (dist[e.v] > dist[u] + e.wt)
        {
          dist[e.v] = dist[u] + e.wt;
        }
      }
    }
  }

  for (int i = 0; i < V; i++)
  {
    cout << dist[i] << " ";
  }
  cout << endl;
}

int main()
{
  int V = 5;
  vector<vector<Edge>> graph(V);

  graph[0].push_back(Edge(1, 2));
  graph[0].push_back(Edge(2, 4));

  graph[1].push_back(Edge(2, -4));

  graph[2].push_back(Edge(3, 2));

  graph[3].push_back(Edge(4, 4));

  graph[4].push_back(Edge(1, -1));

  bellmanaFord(graph, V, 0);
  return 0;
}