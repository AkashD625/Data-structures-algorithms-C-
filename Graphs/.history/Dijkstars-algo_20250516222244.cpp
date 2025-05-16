// It is used to find the shortest path to any perticuler node from the given node or the source node.
// To implete we use 3 techniquies (using queues , using priority queue , using set ds)
//becouse set store unique value and the 
// return the array of distances where index are the node and value is the distances form 0 or source node.

// if the graph contains any negetive weigth cycle then we can say that not he dijkstar algorithm.
// it will fall in infinite loop for negetive weight.
// Time Complexity - O(e log V); -> e = number of edges and the v is number of nodes.

class Solution
{
public:
      vector<int> dijkstra(int V, vector<vector<int>> &edges, int src)
      {
            // Step 1: Create adjacency list
            vector<vector<pair<int, int>>> adj(V); // Correct syntax

            for (auto edge : edges)
            {
                  int u = edge[0];
                  int v = edge[1];
                  int wt = edge[2];
                  adj[u].push_back({v, wt});
                  adj[v].push_back({u, wt}); // Assuming undirected graph
            }

            // Step 2: Initialize distance array
            vector<int> dist(V, INT_MAX); // Use vector instead of array for return
            dist[src] = 0;

            // Step 3: Min Heap (distance, node)
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
            pq.push({0, src});

            while (!pq.empty())
            {
                  int dis = pq.top().first;
                  int node = pq.top().second;
                  pq.pop();

                  for (auto it : adj[node])
                  {
                        int adjNode = it.first;
                        int edgeWeight = it.second;

                        if (dis + edgeWeight < dist[adjNode])
                        {
                              dist[adjNode] = dis + edgeWeight;
                              pq.push({dist[adjNode], adjNode});
                        }
                  }
            }

            return dist;
      }
};
