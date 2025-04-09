// //Find the number of provinces
// Province ? -> There are 3 graphs not connected to each other , so we cannot travel from one other so there are 3 provinces .
// BFS and DFS will Travel or reach each node of the graph
//DFS Time complexity - 0(v+2E)  where v is number of nodes and E is number of edges.
// GFG Problem.

class Solution
{
private:
      void dfs(int node, vector<int> adjLs[], int visited[])
      {
            visited[node] = 1;
            for (auto it : adjLs[node])
            {
                  if (!visited[it])
                  {
                        dfs(it, adjLs, visited);
                  }
            }
      }

public:
      int numProvinces(vector<vector<int>> adj, int V)
      {
            vector<int> adjLs[V];

            // Convert adjacency matrix to adjacency list
            for (int i = 0; i < V; i++)
            {
                  for (int j = 0; j < V; j++)
                  {
                        if (adj[i][j] == 1 && i != j)
                        {
                              adjLs[i].push_back(j);
                              adjLs[j].push_back(i);
                        }
                  }
            }

            int visited[V] = {0};
            int cnt = 0;

            for (int k = 0; k < V; k++)
            {
                  if (!visited[k])
                  {
                        cnt++;
                        dfs(k, adjLs, visited);
                  }
            }

            return cnt;
      }
};