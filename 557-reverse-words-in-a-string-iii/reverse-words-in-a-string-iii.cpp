class Solution {
public:
    string reverseWords(string s) {
        
        string ans = "";
        string temp = "";

        for( auto ch : s)
        {
            if( ch != ' ')
            {
                temp += ch;
            } else {
                reverse(temp.begin() , temp.end());
                ans += temp;
                ans += " ";
                temp = "";
            }
        }

        reverse(temp.begin() , temp.end());

        ans += temp;

        return ans;
    }
};