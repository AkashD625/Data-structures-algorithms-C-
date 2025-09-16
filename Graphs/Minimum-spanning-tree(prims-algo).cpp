#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
      int spanningTree(int V, vector<vector<int>> &edges)
      {
            // Create adjacency list: adj[u] = {{v, weight}, ...}
            vector<vector<pair<int, int>>> adj(V);
            for (int i = 0; i < edges.size(); i++)
            {
                  int u = edges[i][0];
                  int v = edges[i][1];
                  int wt = edges[i][2];

                  adj[u].push_back({v, wt});
                  adj[v].push_back({u, wt}); // since undirected graph
            }

            // Min-heap (weight, node)
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

            vector<int> visited(V, 0); // visited array
            int sum = 0;               // total weight of MST

            pq.push({0, 0}); // {edge weight, starting node}

            while (!pq.empty())
            {
                  auto it = pq.top();
                  pq.pop();

                  int wt = it.first;
                  int node = it.second;

                  // If already visited, skip
                  if (visited[node])
                        continue;

                  visited[node] = 1; // mark visited
                  sum += wt;         // add edge weight to MST sum

                  // Push all adjacent nodes
                  for (auto nbr : adj[node])
                  {
                        int adjNode = nbr.first;
                        int adjWeight = nbr.second;

                        if (!visited[adjNode])
                        {
                              pq.push({adjWeight, adjNode});
                        }
                  }
            }

            return sum; // MST total weight
      }
};
