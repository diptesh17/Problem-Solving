class Solution {
  public:
  
    void dfs(int i , vector<vector<int>> &adj , vector<int>&temp , vector<bool>&visited)
    {
        visited[i] = true;
        temp.push_back(i);
        
        for(auto x : adj[i])
        {
            if(!visited[x])
            {
                dfs(x,adj,temp,visited);
            }
        }
    }
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here
        
        // edge to adj list
        vector<vector<int>> adj(V);
        
        for( auto x : edges)
        {
            int f = x[0];
            int s = x[1];
            
            adj[f].push_back(s);
            adj[s].push_back(f);
        }
        
        vector<vector<int>>ans;
        vector<bool>visited(adj.size(),false);
        
        for(int i=0 ; i<adj.size();i++)
        {
            if(!visited[i])
            {
                vector<int>temp;
                dfs(i,adj,temp,visited);
                ans.push_back(temp);
            }
        }
        
        return ans;
        
    }
};
