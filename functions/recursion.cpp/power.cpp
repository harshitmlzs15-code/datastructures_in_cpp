#include <iostream>
using namespace std;
int power(int a,int b){
    if(b<0) return 0;
    if (b==0) return 1;
    return a*power(a,b-1);
}

int main(){
    int n, x;
  cin>>n;
  cin>>x;
  cout<<power(n,x)<<endl;
 return 0;
}