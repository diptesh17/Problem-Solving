class Solution {
  public:
  
    int dp[1001];
    
    int stair(int n)
    {
        if(n <= 1)
        return 1;
        
        if(dp[n] != -1)
        return dp[n];
        
        return dp[n] = stair(n-1) + stair(n-2);
    }
    
    int countWays(int n) {
        
       memset(dp,-1,sizeof(dp));
       
       return stair(n);
        
    }
};
