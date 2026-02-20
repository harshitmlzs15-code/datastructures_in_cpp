#include <iostream>
using namespace std;
int fibo(int x){
   if (x == 1 || x==2) return 1;
    return fibo(x-1) + fibo(x-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
 return 0;
}