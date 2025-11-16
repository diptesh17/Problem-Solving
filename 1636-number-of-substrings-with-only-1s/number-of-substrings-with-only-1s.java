class Solution {
    public int numSub(String s) {
        
        // n => n * (n+1) / 2 substrings possible 
        
        long mod = 1_000_000_007;

        long ans = 0; 
        int n = s.length();
        for(int i=0; i<n;) {

            // skipping zeroes

            while(i<n && s.charAt(i)=='0')
                i++;
            
            long ones = 0; // consecutive ones

            while(i<n && s.charAt(i)=='1') {
                ones++;
                i++;
            }

            // total substrings
            long currcount = ((ones)%mod * (ones+1)%mod)%mod;
            currcount = (currcount/2)%mod;
            ans = (ans + currcount)%mod;

        }

        return (int)ans;

    }
}