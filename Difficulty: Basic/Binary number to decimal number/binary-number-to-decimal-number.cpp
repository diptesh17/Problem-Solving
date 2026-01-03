class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        
        int num = 0;
        
        for( char c : b)
        {
            num = num * 2 + ( c - '0');
        }
        
        return num;
    }
};