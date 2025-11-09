class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3)  
            return false;

        int i = 0;
        int n = arr.size();

        // till peak
        while (i + 1 < n && arr[i] < arr[i + 1]) {
            i++;
        }

        // peak can't be start or end
        if (i == 0 || i == n - 1)
            return false;

        // go down
        while (i + 1 < n && arr[i] > arr[i + 1]) {
            i++;
        }

        return i == n - 1;
    }
};