class Solution {
public:
    string trimCustom(const string& s) {
        int n = s.size();
        int start = 0, end = n - 1;

        while (start < n && s[start] == ' ') start++;
        while (end >= 0 && s[end] == ' ') end--;

        if (start > end) return "";

        string trimmed = "";
        for (int i = start; i <= end; ++i) {
            trimmed += s[i];
        }

        return trimmed;
    }

    string reverseWords(string s) {
        s = trimCustom(s);
        reverse(s.begin(), s.end());

        string ans = "";
        string temp = "";

        for (auto ch : s) {
            if (ch != ' ') {
                temp += ch;
            } else {
                if (!temp.empty()) {
                    reverse(temp.begin(), temp.end());
                    ans += temp + " ";
                    temp = "";
                }
            }
        }

        if (!temp.empty()) {
            reverse(temp.begin(), temp.end());
            ans += temp;
        } else if (!ans.empty() && ans.back() == ' ') {
            ans.pop_back();
        }

        return ans;
    }
};
