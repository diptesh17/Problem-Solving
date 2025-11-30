class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int low = 0;
        int high = 0;
        int res = INT_MIN;
        int n = fruits.size();

        unordered_map<int,int>mp;

        for(high = 0 ; high < n ; high++)
        {
            // insert
            mp[fruits[high]]++;

            // Shrink
            while(mp.size() > 2)
            {
                mp[fruits[low]]--;

                if(mp[fruits[low]] == 0)
                {
                    mp.erase(fruits[low]);
                }

                low++;
            }

            if(mp.size() <= 2)
            {
                int len = high - low + 1;
                res = max(res,len);
            }
        }

        return res;
        
    }
};