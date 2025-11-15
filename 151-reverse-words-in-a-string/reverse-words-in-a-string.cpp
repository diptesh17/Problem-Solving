class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        
        // Remove leading spaces
        int start = 0;
        while (start < n && s[start] == ' ') start++;
        
        // Remove trailing spaces
        int end = n - 1;
        while (end >= 0 && s[end] == ' ') end--;

        // Reverse the trimmed portion
        reverse(s.begin() + start, s.begin() + end + 1);

        string ans = "";
        string word = "";

        for (int i = start; i <= end; i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (!word.empty()) {
                    reverse(word.begin(), word.end());
                    if (!ans.empty()) ans += " ";
                    ans += word;
                    word.clear();
                }
            }
        }

        // Last word
        if (!word.empty()) {
            reverse(word.begin(), word.end());
            if (!ans.empty()) ans += " ";
            ans += word;
        }

        return ans;
    }
};
