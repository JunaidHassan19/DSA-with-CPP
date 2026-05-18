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
  bool isundir; // To check if the graph is undirected or directed

public:
  Graph(int V, bool isundir = true)
  {
    this->V = V;
    this->isundir = isundir;
    l = new list<int>[V];
  }

  void addEdge(int u, int v)
  {
    l[u].push_back(v);
    if (!isundir) // If the graph is directed, then we will not add the edge in the opposite direction
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
};

int main()
{
  // directed graph
  Graph graph(4, false);

  graph.addEdge(1, 0);
  graph.addEdge(0, 2);
  graph.addEdge(2, 3);

  graph.addEdge(3, 0);

  return 0;
}