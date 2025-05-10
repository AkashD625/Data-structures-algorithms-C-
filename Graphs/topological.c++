// topology => directed acyclic graph (edge between u and v => u always appear before v)
// linear ordering = > 4 5 3 2 1 0(topological sort)
// which means that 4 appears before 0 (which means that 4=>0)

//there might by multiple orders , return any one...

class Solution
{
private:
      void dfs(int node, vector<int> &visi, vector<int> adj[], stack<int> &st)
      {
            visi[node] = 1;
            for (auto it : adj[node])
            {
                  if (!visi[it])
                  {
                        dfs(it, visi, adj, st);
                  }
            }
            st.push(node); // Push after visiting all neighbors
      }

public:
      vector<int> topoSort(int V, vector<vector<int>> &edges)
      {
            vector<int> adj[V];
            for (auto edge : edges)
            {
                  int u = edge[0];
                  int v = edge[1];
                  adj[u].push_back(v);
            }

            vector<int> visi(V, 0);
            stack<int> st;

            for (int i = 0; i < V; i++)
            {
                  if (!visi[i])
                  {
                        dfs(i, visi, adj, st);
                  }
            }

            vector<int> ans;
            while (!st.empty())
            {
                  ans.push_back(st.top());
                  st.pop();
            }

            return ans;
      }
};

// the time complexity of this algorithm is O(V + E) where V is the number of vertices and E is the number of edges in the graph. The space complexity is O(V) for the visited array and the stack used for DFS.

// kahn's algorithm is another way to do topological sorting using BFS
//code - 
class Solution
{
public:
      vector<int> topoSort(int V, vector<vector<int>> &edges)
      {
            vector<int> adj[V];
            for (auto edge : edges)
            {
                  int u = edge[0];
                  int v = edge[1];
                  adj[u].push_back(v);
            }

            vector<int> indegree(V, 0);
            for (int i = 0; i < V; i++)
            {
                  for (auto it : adj[i])
                  {
                        indegree[it]++;
                  }
            }

            queue<int> q;
            for (int i = 0; i < V; i++)
            {
                  if (indegree[i] == 0)
                  {
                        q.push(i);
                  }
            }

            vector<int> ans;
            while (!q.empty())
            {
                  int node = q.front();
                  q.pop();
                  ans.push_back(node);
                  for (auto it : adj[node])
                  {
                        indegree[it]--;
                        if (indegree[it] == 0)
                        {
                              q.push(it);
                        }
                  }
            }

            return ans;
      }
};

// in simple, how this code is going to work in 2 line is
// 1. It uses Kahn's algorithm to perform topological sorting on a directed acyclic graph (DAG) by maintaining an indegree count for each node and using a queue to process nodes with zero indegree.
// 2. The algorithm ensures that all nodes are processed in a valid order, respecting the directed edges between them.