class Solution {
  public:
  
    void dfsalgo(int i , vector<int>&ans , vector<bool>&visited ,vector<vector<int>>& adj )
    {
        visited[i] = true;
        ans.push_back(i);
        
        for(auto x : adj[i])
        {
            if(!visited[x])
            {
                dfsalgo(x,ans,visited,adj);
            }
        }
        
    }
    
    
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        
        
        vector<int>ans;
        vector<bool>visited(adj.size(),false);
        
        for(int i=0; i<adj.size();i++)
        {
            if(!visited[i])
            {
                dfsalgo(i,ans,visited,adj);
            }
        }
        
        return ans;
    }
};