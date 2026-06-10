#include<bits/stdc++.h>
using namespace std;

// Left rotate array by D position
void rotate_array(vector<int> &arr, int n , int d){
  d = d%n;
  int temp[d];
  for( int i =0; i < d; i++){
    temp[i]=arr[i];
  }
  for( int i = d; i<n ; i++){
    arr[i-d]=arr[i];
  }
  for( int i=n-d; i<n ; i++){
    arr[i]= temp [i-(n-d)];
  }
}

int main(){
  int n;
  cin >> n;

  vector<int> arr(n);

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  int d;
  cin >> d;

  rotate_array(arr, n , d);

  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }

  return 0;
}