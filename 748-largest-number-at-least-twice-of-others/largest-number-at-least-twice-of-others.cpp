class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        int mini = INT_MIN;
        int idx = -1;

        for(int i=0 ; i<nums.size();i++)
        {
            if(nums[i]>mini)
            {
                mini = max(nums[i] , mini);
                idx = i;
            }
        }

        for(int i=0 ; i<nums.size();i++)
        {
            if(nums[i]*2 > mini && idx!=i)
            {
                return -1;
            }
        }

        return idx;


        
    }
};