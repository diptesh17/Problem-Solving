

class Solution {
  public:
    vector<int> shortestPath(int V, vector<vector<int>> &edges, int src) {
        // code here
        
        vector<vector<int>>adj(V);
        
        for(auto x : edges)
        {
            int u = x[0];
            int v = x[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int>visited(V,-1);
        queue<int>q;

        visited[src] = 0;
        q.push(src);
        
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            
            for(auto x : adj[curr])
            {
                if(visited[x] == -1)
                {
                    visited[x] = visited[curr] + 1;
                    q.push(x);
                }
            }
        }
        
        return visited;
        
        
        
    }
};
