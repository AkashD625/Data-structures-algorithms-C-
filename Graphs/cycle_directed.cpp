class Solution
{
private:
      bool dfs(int node, vector<int> &visi, vector<vector<int>> &adj)
      {
            visi[node] = 1; // Mark as visiting (part of current path)

            for (auto neighbor : adj[node])
            {
                  if (visi[neighbor] == 1)
                  {
                        // Back edge found → cycle exists
                        return true;
                  }
                  if (visi[neighbor] == 0)
                  {
                        if (dfs(neighbor, visi, adj))
                              return true;
                  }
            }

            visi[node] = 2; // Mark as completely visited
            return false;
      }

public:
      bool isCyclic(int V, vector<vector<int>> &edges)
      {
            vector<vector<int>> adj(V);
            for (auto edge : edges)
            {
                  int u = edge[0];
                  int v = edge[1];
                  adj[u].push_back(v); // Directed edge from u to v
            }

            vector<int> visi(V, 0);

            for (int i = 0; i < V; i++)
            {
                  if (visi[i] == 0)
                  {
                        if (dfs(i, visi, adj))
                              return true;
                  }
            }

            return false;
      }
};