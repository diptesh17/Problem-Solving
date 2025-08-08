#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, -2, 3, 4, 5};

    int min_sum = arr[0];
    int curr_sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        curr_sum += arr[i];
        min_sum = min(min_sum, curr_sum);

        if (curr_sum > 0) {
            curr_sum = 0;  // reset if sum becomes positive
        }
    }

    cout << min_sum;
    return 0;
}
