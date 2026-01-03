class Solution {
  public:
  
    int dp[1001][1001];
    
    int solve(int idx, int W, vector<int> &val, vector<int> &wt) {
        
        if(W == 0 || idx == wt.size())
        return 0;
        
        if(dp[idx][W] != -1)
        return dp[idx][W];
        
        if(wt[idx] > W)
        {
            return dp[idx][W] = solve(idx+1,W,val,wt);
        }
        
        int take = val[idx] + solve(idx,W-wt[idx] , val,wt);
        int nottake = solve(idx+1,W,val,wt);
        
        return dp[idx][W] = max(take,nottake);
    }
    
    
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
         memset(dp, -1, sizeof(dp));
        return solve(0, capacity, val, wt);
        
    }
};