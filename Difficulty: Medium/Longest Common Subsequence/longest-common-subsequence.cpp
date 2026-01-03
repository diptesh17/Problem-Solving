class Solution {
  public:
  
    int dp[1001][1001];
  
    int subseq(string &s1, string &s2 , int m , int n )
    {
        if(m == 0 || n == 0)
        return 0;
        
        if(dp[m][n] != -1)
        return dp[m][n];
        
        if(s1[m-1] == s2[n-1])
        {
            dp[m][n] =  1 + subseq(s1,s2,m-1,n-1);
        } else {
            dp[m][n] =  max( subseq(s1,s2,m,n-1) , subseq(s1,s2,m-1,n));
        }
        
        return dp[m][n];
    }
    
    int lcs(string &s1, string &s2) {
        
        memset(dp,-1,sizeof(dp));
        
        int m = s1.length();
        int n = s2.length();
        
        return subseq(s1,s2,m,n);
        
    }
};
