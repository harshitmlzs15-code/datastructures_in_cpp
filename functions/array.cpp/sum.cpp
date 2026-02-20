#include <iostream>
using namespace std;

int main(){
  int x[5] = {1,4,3,8,7};
  int k = 0;
  for(int i = 0; i<=4; i++){
    k+=x[i];
  }
  cout<<k<<endl;
 return 0;
}