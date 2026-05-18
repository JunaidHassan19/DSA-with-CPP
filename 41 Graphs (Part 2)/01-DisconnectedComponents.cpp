#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

// Graph with 2 disconnected components
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

  void bfsHelper(int st, vector<bool> &vis)
  {
    queue<int> q;
    q.push(st);
    vis[st] = true;

    while (q.size() > 0)
    {
      int u = q.front();
      q.pop();
      cout << u << " ";

      list<int> neighbors = l[u];
      for (int v : neighbors)
      {
        if (!vis[v])
        {
          vis[v] = true;
          q.push(v);
        }
      }
    }
    cout << endl;
  }

  // BFS to print all disconnected components
  void bfs()
  {
    vector<bool> vis(V, false);
    // We need to run BFS for all the components of the graph
    for (int i = 0; i < V; i++)
    {
      // If the vertex is not visited, then we will run BFS for that vertex and print all the vertices in that component
      if (!vis[i])
      {
        bfsHelper(i, vis);
        cout << endl;
      }
    }
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

  // DFS to print all disconnected components
  void dfs()
  {
    vector<bool> vis(V, false);
    // We need to run DFS for all the components of the graph
    for (int i = 0; i < V; i++)
    {
      // If the vertex is not visited, then we will run DFS for that vertex and print all the vertices in that component
      if (!vis[i])
      {
        dfsHelper(i, vis);
        cout << endl;
      }
    }
    cout << endl;
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

  graph.dfs();
  return 0;
}