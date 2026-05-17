#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

// Depth First Search (DFS) implementation for a graph represented as an adjacency list
class Graph
{
  int V;
  list<int> *l;

public:
  Graph(int V)
  {
    this->V = V;
    l = new list<int>[V];
  }

  void addEdge(int u, int v)
  {
    l[u].push_back(v);
    l[v].push_back(u);
  }

  // Function to perform DFS traversal of the graph -Tc=O(V+E) and Sc=O(V)
  void dfs(int u, vector<bool> &vis)
  {
    vis[u] = true;
    cout << u << " ";

    list<int> neighbors = l[u];
    // Iterate through the neighbors of vertex u
    for (int v : neighbors)
    {
      // If the neighbor vertex v has not been visited, recursively call dfs on vertex v
      if (!vis[v])
      {
        dfs(v, vis);
      }
    }
  }
};

int main()
{
  Graph graph(7);

  graph.addEdge(0, 1);
  graph.addEdge(0, 2);
  graph.addEdge(1, 3);
  graph.addEdge(2, 4);
  graph.addEdge(3, 4);
  graph.addEdge(3, 5);
  graph.addEdge(4, 5);
  graph.addEdge(5, 6);

  vector<bool> vis(7, false);
  graph.dfs(0, vis);
  return 0;
}