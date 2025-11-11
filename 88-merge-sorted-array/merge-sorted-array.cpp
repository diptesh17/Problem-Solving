class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> ans;
        int i = 0, j = 0;

        // merge actual elements only
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        // leftover from nums1
        while (i < m) {
            ans.push_back(nums1[i]);
            i++;
        }

        // leftover from nums2
        while (j < n) {
            ans.push_back(nums2[j]);
            j++;
        }

        // put back into nums1
        for (int k = 0; k < ans.size(); k++) {
            nums1[k] = ans[k];
        }
    }
};
