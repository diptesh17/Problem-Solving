class Solution {
public:
    string removeDuplicates(string s) {

        string ans;
        stack<char>st;

        int i=0;

        while(i<s.length())
        {
            if(!st.empty())
            {
                char c = st.top();
                if(s[i] == c)
                {
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            } else {
                st.push(s[i]);
            }

            i++;
        }

        while(!st.empty())
        {
            char c = st.top();
            ans += c;
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;

        
        
    }
};