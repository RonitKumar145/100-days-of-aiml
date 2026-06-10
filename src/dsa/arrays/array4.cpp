#include<bits/stdc++.h>
using namespace std;

//remove duplicate from array
int remove_duplicate(vector<int> & arr, int n){
  int i =0;
  for (int j=1;j<n;j++){
    if(arr[i]!=arr[j]){
      arr[i+1]=arr[j];
      i++;
    }
  }
  return i+1;
}
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }
  cout<<remove_duplicate(arr,n);
  return 0;
}