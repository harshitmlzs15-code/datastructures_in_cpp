#include <iostream>
using namespace std;
void nto1(int x){
    if (x>0){
    cout<<x<<endl;
    nto1(x-1);
}
}
int main(){
    // int a=10;
  nto1(10);
 return 0;
}