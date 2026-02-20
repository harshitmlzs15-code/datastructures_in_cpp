#include <iostream>
using namespace std;

int main(){
    int a[]={1,3,50,10,2,5,6};
    int n = sizeof(a)/4;
    int mx = INT_MIN;
    for ( int i =0; i<=n-1; i++ ){ //array ki indexing n-1 hoti h
        if(mx<a[i]){
            mx = a[i];
    }
}
int kx = INT_MIN;
for ( int i =0; i<=n-1; i++ ){
    if(kx<a[i] && kx<mx){
        kx = a[i];
    }
}
cout<<kx;
 return 0;
}