#include <iostream>
using namespace std;

int main(){
  int a[5] = {1,4,3,8,7};
  for(int i = 0; i<=4; i++){
    if (i%2==0){
        a[i]+=10;
    }
    else{
        a[i]*=2;
    }
   
  }
  for(int i = 0; i<=4; i++){
    cout<<a[i]<<" ";
  }
 return 0;
}