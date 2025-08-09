// Bubble Sort : 
// Outer : n-1 time runs
// inner : n-i-1 times runs
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();

        for(int i=0 ; i<n-1 ; i++)
        {
            for(int j=0 ; j<n-i-1 ; j++)
            {
                if(nums[j] > nums[j+1])
                {
                    swap(nums[j] , nums[j+1]);
                }
            }
        }

        return nums;
        
    }
};


// Selection Sort
// Treat sorted & unsorted portion
// Pick smallest elem from unsorted and put it in correct sorted position

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 12, 3, -4, 5};

    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int smallIdx = i;
        
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[j] < arr[smallIdx])
            {
                smallIdx = j;
            }
        }
        
        swap(arr[i] , arr[smallIdx]);
        
    }
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}


// Insertion Sort

// Merge Sort 
// Based on divide & conqueue approach
// divide : logn
// merge : n
// TC : nlogn
class Solution {
public:

    void merge(vector<int>& nums , int start , int mid , int end)
    {
        vector<int> temp;
        int i = start;
        int j = mid + 1;

        while (i <= mid && j <= end)
        {
            if (nums[i] <= nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while (i <= mid)
        {
            temp.push_back(nums[i]);
            i++;
        }

        while (j <= end)
        {
            temp.push_back(nums[j]);
            j++;
        }

        for (int idx = 0; idx < temp.size(); idx++)
        {
            nums[start + idx] = temp[idx];  
        }
    }

    void div(vector<int>& nums , int start , int end)
    {
        if (start < end)
        {
            int mid = start + (end - start) / 2;
            div(nums, start, mid);
            div(nums, mid + 1, end);
            merge(nums, start, mid, end);
        }
    }

    vector<int> sortArray(vector<int>& nums) 
    {
        div(nums, 0, nums.size() - 1);
        return nums;
    }
};


// Quick Sort
// Based on pivot & partition
// Pivot : Special idx can be start , mid or end
// Taking Pivot as last elem
// Agenda is to partioned array based on pivot , elem which are less or equal should be at left of pivot
// In partioned its not needed to be in correct order

/* 
- Pivot pick : end elem
- Partioned : less on left and big on right
- Call QS for left and right half recursively
*/

class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pivotIdx = partition(arr, low, high); // fixed: need to call partition
            quickSort(arr, low, pivotIdx - 1);
            quickSort(arr, pivotIdx + 1, high);
        }
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high];  // pivot as last element
        int i = low - 1;        // index of smaller element

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]); // place pivot in correct position
        return i + 1;
    }
};
