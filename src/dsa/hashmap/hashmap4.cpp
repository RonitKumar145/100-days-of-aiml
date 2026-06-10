#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[]={10,5,10,15,5};
  int n = sizeof(arr)/sizeof(arr[0]);

  unordered_map<int,int>freq;

  for (int i =0 ; i<n ;i ++){
    freq[arr[i]]++;

  }

  int maxfreq =0;
  int minfreq =1;

  int maxele =-1;
  int minele = -1;

  for(auto it : freq){
    if(it.second>maxfreq){
      maxfreq=it.second;
      maxele =it.first;
    }
    if(it.second<minfreq){
      minfreq=it.second;
      minele=it.first;
    }
  }

  cout<<"highest freq no : "<<maxele<<" - "<<maxfreq<<endl;
  cout<<"lowest freq no : "<<minele<<" - "<<minfreq<<endl;
  return 0;
}