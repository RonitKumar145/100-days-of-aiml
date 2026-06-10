#include<iostream>
using namespace std;


int main(){
  int n;

  cin>> n;
  int rev =0;

  int dup=n;
  while(n>0){
    int idigit = n%10;
    rev = (rev*10) + idigit;
    n=n/10;
    
  }
  if(dup==rev){
    cout<<"true"<<endl;
  }
  else{
    cout<<"false"<<endl;
  }

  return 0;
}
