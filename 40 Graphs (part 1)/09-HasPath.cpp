#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

// Has Path Problem - Given a graph and two vertices, determine if there is a path between them
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

  void dfsHelper(int u, vector<bool> &vis)
  {
    vis[u] = true;
    cout << u << " ";

    list<int> neighbors = l[u];
    for (int v : neighbors)
    {
      if (!vis[v])
      {
        dfsHelper(v, vis);
      }
    }
  }

  void dfs()
  {
    vector<bool> vis(7, false);
    dfsHelper(0, vis);
    cout << endl;
  }

  // Helper function to determine if there is a path from src to dest using DFS - tc=O(V+E) and sc=O(V)
  bool pathHelper(int src, int dest, vector<bool> &vis)
  {
    if (src == dest)
    {
      return true;
    }

    vis[src] = true;
    list<int> neighbors = l[src];

    for (int v : neighbors)
    {
      if (!vis[v])
      {
        if (pathHelper(v, dest, vis))
        {
          return true;
        }
      }
    }
    return false;
  }

  // Function to determine if there is a path from src to dest using DFS - tc=O(V+E) and sc=O(V)
  bool hasPath(int src, int dest)
  {
    vector<bool> vis(V, false);
    return pathHelper(src, dest, vis);
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

  cout << graph.hasPath(0, 5) << endl;
  return 0;
}