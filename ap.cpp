#include <iostream>
using namespace std;

int main(){
  int num;
  cout<<"enter end value of AP: "<<endl;
  cin>>num;
  for(int i = 1; i<=2*num-1; i+=2){
    cout<<i<<" ";
  }
 return 0;
}