#include<iostream>
using namespace std;

int main (){
    int n;

  cin>> n;
  int sum =0;

  int dup =n;


  while(n>0){
    int idigit = n%10;
    sum = sum + (idigit * idigit * idigit);
    n=n/10;
    
  }
  if(dup==sum){
    cout<<"true"<<endl;
  }
  else{
    cout<<"false"<<endl;
  }
  return 0;
}