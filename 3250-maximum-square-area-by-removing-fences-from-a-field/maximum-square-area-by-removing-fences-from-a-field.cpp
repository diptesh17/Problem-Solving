

class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        
        hFences.push_back(1);
        hFences.push_back(m);
        vFences.push_back(1);
        vFences.push_back(n);
        
        int hsize=hFences.size();
         int vsize=vFences.size();
        sort( hFences.begin(), hFences.end());
        sort( vFences.begin(), vFences.end());
        
        set<int> s;
        for(int i=hsize-1;i>=0;i--){
            
            for(int j=0;j<i;j++){
                int diff=hFences[i]-hFences[j];
                s.insert(diff);
            }
        }
        vector<int> v;
        for(int i=vsize-1;i>=0;i--){
            
            for(int j=0;j<i;j++){
                int diff=vFences[i]-vFences[j];
                v.push_back(diff);
            }
        }
        int long long res=-1;
        sort( v.begin(), v.end());
        for(int i=v.size()-1;i>=0;i--){
          if(  s.find(v[i])!=s.end()){
              res=v[i];
              break;
              
          }
        }
        
        
        
        int mod=1e9+7;
        
    if(res!=-1){
        res=(res*res)%mod;
    }
        
        
       return res; 
        
    }
};