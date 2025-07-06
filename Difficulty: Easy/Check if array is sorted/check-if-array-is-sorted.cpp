class Solution {
  public:
    bool arraySortedOrNot(vector<int>& nums) {
        // code here
        for(int i=1 ; i<nums.size() ; i++)
            {
                if(nums[i] < nums[i-1])
                return false;
            }

            return true;
    }
};