#include <iostream>
using namespace std;
//sum of 1st n numbers using parameterised

void f(int n,int sum){
  if(n<1){
    cout<<sum;
    return;
  }
  f(n-1,sum+n);
}
int main(){
  int n;
  cin>>n;
  f(n,0);
  return 0;
}