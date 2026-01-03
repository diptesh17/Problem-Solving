class Solution {
  public:
  
    int dp[1001][1001];
    
    int solve(int idx, int W, vector<int> &val, vector<int> &wt) {
        if (idx == val.size() || W == 0)
            return 0;
        
        if (dp[idx][W] != -1)
            return dp[idx][W];
        
        if (wt[idx] > W)
            return dp[idx][W] = solve(idx + 1, W, val, wt);
        
        int take = val[idx] + solve(idx + 1, W - wt[idx], val, wt);
        int notTake = solve(idx + 1, W, val, wt);
        
        return dp[idx][W] = max(take, notTake);
    }
    
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        memset(dp, -1, sizeof(dp));
        return solve(0, W, val, wt);
    }
};
