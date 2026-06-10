#include<iostream>
#include<vector>
using namespace std;

// Reverse an array using recursion

void f(vector<int>& arr, int i, int n){

    if(i>= n/2){
        return;
    }

    swap(arr[i], arr[n-i-1]);

    f(arr, i + 1, n);
}

int main(){

    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    f(arr, 0, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}