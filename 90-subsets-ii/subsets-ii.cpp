class Solution {
public:

    void subset(vector<int>& nums , vector<int>& temp , int i , vector<vector<int>>& ans)
    {
        if(i>=nums.size())
        {
            ans.push_back(temp);
            return;
        }

        // include
        temp.push_back(nums[i]);
        subset(nums,temp,i+1,ans);

        // backtrack
        temp.pop_back();

        // exclude
        int idx = i+1;
        while(idx < nums.size() && nums[idx] == nums[idx-1])
        {
            idx++;
        }

        subset(nums,temp,idx,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin() , nums.end());
        vector<vector<int>>ans;
        vector<int>temp;

        subset(nums,temp,0,ans);
        return ans;
        
    }
};