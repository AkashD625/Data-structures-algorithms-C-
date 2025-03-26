// This question is taken from the gfg plateform for implememtation of BFS in graph.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class bfs
{
public:
      int main()
      {
            vector<int> bfs;
            int v = adj.size();
            vector<int> visi(v, 0); // Corrected visited array

            queue<int> q;
            q.push(0); // Start from node 0
            visi[0] = 1;

            while (!q.empty())
            {
                  int node = q.front();
                  q.pop();
                  bfs.push_back(node);

                  for (auto it : adj[node])
                  {
                        if (!visi[it])
                        {
                              visi[it] = 1;
                              q.push(it);
                        }
                  }
            }
            return bfs;
      }
}
