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
