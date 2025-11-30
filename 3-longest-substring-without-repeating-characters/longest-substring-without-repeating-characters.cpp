class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
    int n = s.length();
    unordered_set<char> st;
    int left = 0;
    int ans = 0;

    for (int right = 0; right < n; right++) {
        char c = s[right];

        // If duplicate, shrink from the left
        while (st.count(c)) {
            st.erase(s[left]);
            left++;
        }

        // Now safe to add
        st.insert(c);

        // Update max window size
        ans = max(ans, right - left + 1);
    }

    return ans;
}
};