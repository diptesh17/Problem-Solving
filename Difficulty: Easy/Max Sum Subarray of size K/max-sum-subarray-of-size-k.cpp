class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        
        int low = 0;
        int high = k-1;
        int sum = 0;
        int result = 0;
        
        for(int i=low ; i<=high;i++)
        {
            sum += arr[i];
        }
        
        while(high < arr.size()-1)
        {
            result = max(sum,result);
            
            high++;
            low++;
            
            sum += arr[high];
            sum -= arr[low-1];
        }
        
        result = max(sum,result);
        
        return result;
    }
};