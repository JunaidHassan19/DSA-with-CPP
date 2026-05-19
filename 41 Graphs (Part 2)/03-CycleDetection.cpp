#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <string>
using namespace std;

// Cycle detection in a directed graph using DFS
class Graph
{
  int V;
  list<int> *l;
  bool isUndir; // To check if the graph is undirected or directed

public:
  Graph(int V, bool isundir = true)
  {
    this->V = V;
    this->isUndir = isUndir;
    l = new list<int>[V];
  }

  void addEdge(int u, int v)
  {
    l[u].push_back(v);
    if (!isUndir) // If the graph is directed, then we will not add the edge in the opposite direction
    {
      l[v].push_back(u);
    }
  }

  void print()
  {
    for (int u = 0; u < V; u++)
    {
      list<int> neighbors = l[u];
      cout << u << " : ";
      for (int v : neighbors)
      {
        cout << v << " ";
      }
      cout << endl;
    }
  }

  // DFS to detect cycle in a directed graph
  bool dfs(int src, vector<bool> &vis, vector<bool> recPath)
  {
    vis[src] = true;
    recPath[src] = true;
    list<int> neighbors = l[src];

    for (int v : neighbors)
    {
      if (!vis[v])
      {
        if (dfs(v, vis, recPath))
        {
          return true;
        }
      }
      else
      {
        if (recPath[v])
        {
          return true;
        }
      }
    }
    recPath[src] = false;
    return false;
  }

  // DFS to detect cycle in an directed graph
  bool isCycleDir()
  {
    vector<bool> vis(V, false);
    vector<bool> recPath(V, false);

    for (int i = 0; i < V; i++)
    {
      if (!vis[i])
      {
        if (dfs(i, vis, recPath))
        {
          return true;
        }
      }
    }
    return false;
  }
};

int main()
{
  // directed graph
  Graph graph(4, false);

  graph.addEdge(1, 0);
  graph.addEdge(0, 2);
  graph.addEdge(2, 3);
  graph.addEdge(3, 0);

  cout << graph.isCycleDir() << endl;
  return 0;
}