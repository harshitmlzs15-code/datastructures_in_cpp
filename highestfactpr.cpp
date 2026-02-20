#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter n: ";
  cin>>n;
  for(int i = n/2; i>=1; i--){//n/2 isliye use kiya kyunki n/2 ke baad koi factor nhi hoga other than n, so ya to factor n/2 hoga ya usse kam hoga.
    if(n%i==0){
cout<<i<<" ";
break;//to get out of loop immediately
    }
  }

 return 0;
}