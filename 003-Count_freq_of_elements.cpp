#include <bits/stdc++.h>
using namespace std;


int main() {
    
    vector<string> arr = {"Apple" , "Banana" , "Apple" , "Mango"};
    
    map<string,int>mp;
    
    for(auto x : arr)
    {
        mp[x]++;
    }
    
    for(auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}
