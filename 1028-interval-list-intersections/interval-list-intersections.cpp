class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b) {

        int n = a.size();
        int m = b.size();
        vector<vector<int>> res;

        int i=0;
        int j=0;

        // Until both list are valid
        while(i<n && j<m)
        {
            int start1 = a[i][0];
            int end1 = a[i][1];

            int start2 = b[j][0];
            int end2 = b[j][1];

            if(start1 <= start2)
            {
                if(end1 >= start2)
                {
                    int st = max(start1,start2);
                    int en = min(end1, end2);
                    res.push_back({st, en});
                }
            }
            else
            {
                if(end2 >= start1)
                {
                    int st = max(start1,start2);
                    int en = min(end1, end2);
                    res.push_back({st, en});
                }
            }

            if(end1 <= end2) i++;
            else j++;
        }

        return res;
    }
};
