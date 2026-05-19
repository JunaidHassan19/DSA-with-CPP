#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

// Bipartite graph using BFS
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

  // BFS to check if the graph is bipartite or not
  bool isBipartite()
  {
    queue<int> q;
    vector<int> color(V, -1); // -1 means uncolored, 0 and 1 are the two colors

    q.push(0);
    color[0] = 0;

    // We need to run BFS for all the components of the graph because the graph can be disconnected
    while (q.size() > 0)
    {
      int curr = q.front();
      q.pop();
      list<int> neighbors = l[curr];

      for (int v : neighbors)
      {
        if (color[v] == -1)
        {
          color[v] = !color[curr];
          q.push(v);
        }
        else
        {
          if (color[v] == color[curr])
          {
            return false;
          }
        }
      }
    }
    return true;
  }
};

int main()
{
  Graph graph(4);

  // Graph with a cycle of odd length, which is not a bipartite graph
  graph.addEdge(0, 1);
  graph.addEdge(0, 2);
  graph.addEdge(1, 3);
  graph.addEdge(2, 3);
  graph.addEdge(0, 3); // Adding this edge creates a cycle of odd length (0-1-3-2-0)

  cout << graph.isBipartite() << endl;
  return 0;
}