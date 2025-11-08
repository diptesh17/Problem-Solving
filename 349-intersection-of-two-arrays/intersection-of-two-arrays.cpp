class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        set<int> s;
        set<int>s2;
        vector<int>ans;

        for( int x : nums1)
        {
            s.insert(x);
        }

        for( int x : nums2)
        {
            if(s.find(x) != s.end())
            {
                s2.insert(x);
            }
        }

        for(int x : s2)
        {
            ans.push_back(x);
        }
        return ans;
        
    }
};