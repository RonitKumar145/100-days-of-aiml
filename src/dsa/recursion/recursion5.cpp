#include <iostream>
using namespace std;
//sum of 1st n numbers using function

int f(int n){
  if(n==0){
    return 0;
    
  }
  return n + f(n-1);

}
int main(){
  int n;
  cin>>n;
  cout<<f(n);
  return 0;
}