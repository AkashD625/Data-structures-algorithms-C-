#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool canSortPermutation(vector<int>& arr, int n) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 1; i < n - 1; i++) {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
                i++; // Skip next index to prevent redundant swaps
            }
        }
    }
    return is_sorted(arr.begin(), arr.end());
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        if (canSortPermutation(arr, n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
