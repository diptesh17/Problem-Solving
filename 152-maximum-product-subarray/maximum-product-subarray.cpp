class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;

        if(n==0)
            return 0;

        for(int i=0 ; i<n ; i++) {
            int prod = 1;
            for(int j=i ; j<n ; j++) {
                prod = prod * nums[j];
                if(prod > maxi) {
                    maxi = prod;
                }
            }
        }

        return maxi;
    }
};