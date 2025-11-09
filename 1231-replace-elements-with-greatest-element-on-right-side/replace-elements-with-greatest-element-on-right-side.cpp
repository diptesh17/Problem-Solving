class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        stack<int>st;
        st.push(-1);
        vector<int>ans;

        for(int i=arr.size()-1 ; i>=0 ; i--)
        {
            if(arr[i] > st.top())
            {
                int x = st.top();
                ans.push_back(x);
                st.pop();
                st.push(arr[i]);
            } else {
                int x = st.top();
                ans.push_back(x);
            }
        }

        reverse(ans.begin(),ans.end());

        return ans;
        
    }
};