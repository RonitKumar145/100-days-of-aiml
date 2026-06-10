#include<bits/stdc++.h>
using namespace std;

//second largest element in array
int secondlargestelement(vector<int>& arr,int n){
  int largest =arr[0];
  int secondlargest=-1;
  //incase array contains negative num take intmin as second largets
  for (int i=1;i<n;i++){
    if (arr[i]>largest){
      secondlargest=largest;
      largest=arr[i];
    }
    else if (arr[i]<largest && arr[i]>secondlargest){
      secondlargest=arr[i];
    }
  }
  return secondlargest;
}
int secondsmallestelement(vector<int> & arr, int n){
  int smallest = arr[0];
  int secondsmallest = INT_MAX;
  for (int i=1;i<n;i++){
    if (arr[i]<smallest){
      secondsmallest=smallest;
      smallest=arr[i];
    }
    else if (arr[i]!=smallest && arr[i]<secondsmallest){
      secondsmallest=arr[i];
    }
  }
  return secondsmallest;
}


int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }
  cout<<secondsmallestelement(arr,n)<<" ";
  cout<<secondlargestelement(arr,n);
  return 0;
}