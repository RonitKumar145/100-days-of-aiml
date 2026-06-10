#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& arr) {
    int j = 0; // Position to place the next non-zero element

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveZeroes(arr);

    cout << "Array after moving zeroes to the end:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}