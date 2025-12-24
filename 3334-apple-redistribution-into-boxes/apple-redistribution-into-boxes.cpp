class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {

        int sum = 0;

        for(int x : apple)
        {
            sum += x;
        }

        int count = 0;
        int current = 0;

        // des order : sort
        sort(capacity.rbegin(), capacity.rend());

        for(int x : capacity)
        {
            current += x;
            count++;

            if( sum <= current)
            {
                return count;
            }


        }

        return 0;
        
    }
};