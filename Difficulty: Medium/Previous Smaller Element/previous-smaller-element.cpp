class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        stack<int>st;
        vector<int>ans;
        
        st.push(arr[0]);
        ans.push_back(-1);
        
        int n = arr.size();
        
       for(int i=1 ; i<n ; i++)
       {
           while(!st.empty() && st.top() >= arr[i])
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
       
       return ans;
    }
};