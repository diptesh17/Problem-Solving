class Solution {
public:
    void duplicateZeros(vector<int>& arr) {

        int n = arr.size();
        vector<int> ans;
        ans.reserve(n);

        for(int x : arr) {
            if(ans.size() == n) break;

            if(x == 0) {
                ans.push_back(0);
                if(ans.size() < n) ans.push_back(0);
            } 
            else {
                ans.push_back(x);
            }
        }

        for(int i = 0; i < n; i++) {
            arr[i] = ans[i];
        }
    }
};
