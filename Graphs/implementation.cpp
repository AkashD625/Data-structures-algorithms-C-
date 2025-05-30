
// Creating the graph usingg adjacency list represention(implementation)




#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class graph
{
public:
      unordered_map<int, list<int>> adj;

      void addEdge(int u, int v, bool direction)
      {
            // direction -> 0 = undirected
            // direction -> 1 = directed graph

            // create edje between u and v
            adj[u].push_back(v);
            if (direction == 0)
            {
                  adj[v].push_back(u);
            }
      }
      // printting the graph
      void printGraph()
      {
            // for each loop
            for (auto i : adj)
            {
                  cout << i.first << "->";
                  for (auto j : i.second)
                  {
                        cout << j << ",";
                  }
                  cout << endl;
            }
      }
};
int main()
{
      int n;
      cout << "Enter the number of nodes" << endl;
      cin >> n;

      int m;
      cout << "Enter the number of edges" << endl;
      cin >> m;

      graph g;
      cout << "Enter" << endl;

      for (int i = 0; i < m; i++)
      {
            int u, v;
            cin >> u >> v;
            g.addEdge(u, v, 0); // 0 for undirected graph
      }

      // printing the graph
      g.printGraph();
}