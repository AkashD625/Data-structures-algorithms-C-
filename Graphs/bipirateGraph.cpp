// Bipartite graph - this is a graph filled with 2 colors in this node but no 2 adjacent nodes are same in color .
// Linear graphs with no cycles are alwasys bipartite.
// Any graph with even cycle length can also be bipartite
// Any graph with odd cycle length can nevers be a bipartite .

// code

class Solution
{
private:
      bool check(int start, const vector<vector<int>> &adj, vector<int> &color)
      {
            queue<int> q;
            q.push(start);
            color[start] = 0;

            while (!q.empty())
            {
                  int node = q.front();
                  q.pop();

                  for (auto neighbor : adj[node])
                  {
                        if (color[neighbor] == -1)
                        {
                              color[neighbor] = !color[node];
                              q.push(neighbor);
                        }
                        else if (color[neighbor] == color[node])
                        {
                              return false;
                        }
                  }
            }

            return true;
      }

public:
      bool isBipartite(int V, vector<vector<int>> &edges)
      {
            // Convert edge list to adjacency list
            vector<vector<int>> adj(V);
            for (auto edge : edges)
            {
                  int u = edge[0];
                  int v = edge[1];
                  adj[u].push_back(v);
                  adj[v].push_back(u);
            }

            vector<int> color(V, -1);

            for (int i = 0; i < V; ++i)
            {
                  if (color[i] == -1)
                  {
                        if (!check(i, adj, color))
                        {
                              return false;
                        }
                  }
            }

            return true;
      }
};