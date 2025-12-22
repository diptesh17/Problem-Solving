class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        stack<int>st;
        vector<int>ans;
        int n = arr.size();
        
        st.push(arr[n-1]);
        ans.push_back(-1);
        
       
        
       for(int i=n-2 ; i>=0 ; i--)
       {
           while(!st.empty() && st.top() <= arr[i])
           {
               st.pop();
           }
           
           if(st.empty())
           {
               ans.push_back(-1);
           } else {
               ans.push_back(st.top());
           }
           
           st.push(arr[i]);
           
       }
       
       reverse(ans.begin(),ans.end());
       return ans;
        
    }
};