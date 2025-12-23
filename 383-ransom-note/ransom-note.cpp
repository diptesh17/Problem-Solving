class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        map<char,int> mp;

        for(int x : ransomNote)
        {
            mp[x]++;
        }

        for(int i=0 ; i<magazine.length() ; i++)
        {
            if(mp.find(magazine[i]) != mp.end())
            {
               mp[magazine[i]]--;
            }
        }

        for(auto x : mp)
        {
            if(x.second >= 1)
            return false;
        }

        return true;
        
    }
};