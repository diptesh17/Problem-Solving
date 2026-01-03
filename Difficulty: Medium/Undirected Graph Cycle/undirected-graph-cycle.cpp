class Solution {
  public:
    
    bool bfs(int src, vector<vector<int>>& adj, vector<bool>& visited) {
        queue<pair<int,int>> q; // {node, parent}
        visited[src] = true;
        q.push({src, -1});
        
        while (!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            
            for (auto x : adj[node]) {
                if (!visited[x]) {
                    visited[x] = true;
                    q.push({x, node});
                } 
                else if (x != parent) {
                    return true; // cycle detected
                }
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        vector<vector<int>> adj(V);
        
        for (auto e : edges) {
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool> visited(V, false);
        
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (bfs(i, adj, visited)) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
