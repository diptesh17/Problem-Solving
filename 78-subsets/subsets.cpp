class Solution {
public:
    void subsequence(vector<int>& nums, int i, vector<int>& temp, vector<vector<int>>& ans) {
        if (i == nums.size()) { // base case
            ans.push_back(temp);
            return;
        }

        // Take current element
        temp.push_back(nums[i]);
        subsequence(nums, i + 1, temp, ans);

        // Not take current element
        temp.pop_back();
        subsequence(nums, i + 1, temp, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subsequence(nums, 0, temp, ans);
        return ans;
    }
};
