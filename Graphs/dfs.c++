#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> &visited, vector<vector<int>> &adj, vector<int> &ls)
{
    visited[node] = 1;
    ls.push_back(node);

    for (auto it : adj[node])
    {
        if (!visited[it])
        {
            dfs(it, visited, adj, ls);
        }
    }
}

// Function to return a list containing the DFS traversal of the graph.
vector<int> dfsOfGraph(vector<vector<int>> &adj)
{
    int v = adj.size();        // Number of nodes
    vector<int> ls;            // Store DFS result
    vector<int> visited(v, 0); // Initialize visited array

    dfs(0, visited, adj, ls); // Start DFS from node 0

    return ls; // Return the DFS traversal
}

int main()
{
    int V, E;
    cin >> V >> E;
    vector<vector<int>> adj(V);

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Assuming undirected graph
    }

    vector<int> result = dfsOfGraph(adj);

    for (int node : result)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
