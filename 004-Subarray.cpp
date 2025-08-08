// 3 Loops : 

#include <bits/stdc++.h>
using namespace std;


int main() {
   
   vector<int>arr = {1,2,3,4,5};
   
   for( int i=0 ; i < arr.size() ; i++)
   {
       for( int j=0 ; j<arr.size() ; j++)
       {
           for( int k = i ; k<=j ; k++)
           {
               cout << arr[k] << " ";
           }
           
           cout << endl;
       }
   }

    return 0;
}


// 2 Loops :

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    int n = arr.size();
    
    for(int i=0 ; i<n ; i++)
    {
        string current = "";
        for(int j=i ; j<n ; j++)
        {
            current += to_string(arr[j]);
            cout << current << " ";
            cout << endl;
        }
    }

    return 0;
}
