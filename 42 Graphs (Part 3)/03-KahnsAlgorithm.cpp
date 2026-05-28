#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
using namespace std;

// Kahn's Algorithm for Topological Sorting - BFS based approach -tc: O(V + E) - sc: O(V)
class Graph
{
  int V;
  list<int> *l;
  bool isUndir;

public:
  Graph(int V, bool isUndir = true)
  {
    this->V = V;
    l = new list<int>[V];
    this->isUndir = isUndir;
  }

  void addEdge(int u, int v)
  {
    l[u].push_back(v);
    if (isUndir)
    {
      l[v].push_back(u);
    }
  }

  // Calculate the indegree of each vertex
  void calcIndegree(vector<int> &indeg)
  {
    for (int u = 0; u < V; u++)
    {
      list<int> neighbors = l[u];
      // Increment the indegree of each neighbor of u
      for (int v : neighbors)
      {
        indeg[v]++;
      }
    }
  }

  // Kahn's Algorithm for Topological Sort
  void topoSort()
  {
    vector<int> indeg(V, 0);
    calcIndegree(indeg);
    queue<int> q;

    // Enqueue all vertices with indegree 0
    for (int i = 0; i < V; i++)
    {
      if (indeg[i] == 0)
      {
        q.push(i);
      }
    }

    // Process the queue until it's empty
    while (q.size() > 0)
    {
      int curr = q.front();
      q.pop();
      cout << curr << " ";

      list<int> neighbors = l[curr];
      // Decrease the indegree of each neighbor and enqueue if it becomes 0
      for (int v : neighbors)
      {
        indeg[v]--;
        if (indeg[v] == 0)
        {
          q.push(v);
        }
      }
    }
    cout << endl;
  }
};

int main()
{
  Graph graph(6, false);

  graph.addEdge(2, 3);
  graph.addEdge(3, 1);

  graph.addEdge(4, 0);
  graph.addEdge(4, 1);

  graph.addEdge(5, 0);
  graph.addEdge(5, 2);

  graph.topoSort();

  return 0;
}