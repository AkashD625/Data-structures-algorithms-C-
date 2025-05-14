// Notes for the code:

// 1. The code is solving a problem related to course scheduling using Topological Sorting.
// 2. It checks if a valid linear ordering of courses is possible based on prerequisites.
// 3. The prerequisites are represented as a directed graph where:
//    - Each course is a node.
//    - A directed edge [u, v] means course `v` must be completed before course `u`.

// Steps in the code:
// 1. Build the adjacency list `adj` from the prerequisites.
// 2. Calculate the in-degree (number of incoming edges) for each node.
// 3. Push all nodes with in-degree 0 into a queue `q` (these are the starting points).
// 4. Perform a BFS-like traversal:
//    - Pop a node from the queue, add it to the topological order (`topo`).
//    - Decrease the in-degree of its neighbors.
//    - If any neighbor's in-degree becomes 0, push it into the queue.
// 5. If the size of the topological order (`topo.size()`) equals the number of nodes `N`, return true (valid ordering exists).
// 6. Otherwise, return false (cycle detected, no valid ordering).

// Key points:
// - The algorithm uses Kahn's Algorithm for Topological Sorting.
// - It ensures that if a cycle exists in the graph, no valid ordering is possible.
// 1 and 2 are interlinked

// [0,1] => means that 1 shouldbe done before 0 
// [1,2] => means that 2 shouldbe done before 1
// [2,3] => means that 3 shouldbe done before 2
// [3,0] => means that 0 shouldbe done before 3
// [1,2] => means that 2 shouldbe done before 1
// [2,3] => means that 3 shouldbe done before 2
// [3,0] => means that 0 should be done before 3

// if any one combination of linear ordering possible then return true at that time it will be topo.sizez() == V

// code
 vector<int> adj[N];
        for(auto it:prerequisites){
            adj[it.first].push_back(it.second);
        }
        
        int indegree[N] = {0};
        for(int i = 0;i<N;i++){
            for(auto it: adj[i]){
                indegree[it]++;
            }
        }
        
        queue<int>q;
        for(int i = 0;i<N;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        
        vector<int> topo;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto it: adj[node]){
                indegree[it]--;
                if(indegree[it] == 0){
                    q.push(it);
                } 
            }
            
            if(topo.size() == N){
                return true;
            }

        }
                    return false;