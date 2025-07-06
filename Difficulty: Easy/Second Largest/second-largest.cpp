class Solution {
  public:
    int getSecondLargest(vector<int> &nums) {
        // code here
         int first = INT_MIN;
        int second = INT_MIN;

        for( int i=0 ; i<nums.size(); i++)
        {
            if(nums[i] > first)
            {
                second = first;
                first = nums[i];
            }
            else if( nums[i] < first && nums[i] > second)
            {
                second = nums[i];
            }
        }

        if( second == INT_MIN){
            return -1;
        }

        return second;
      
    }
};