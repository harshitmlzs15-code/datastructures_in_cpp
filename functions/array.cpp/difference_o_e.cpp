#include <iostream>
using namespace std;

int main(){
    int arr[]={1,3,50,10,2,5,6};
    int n = sizeof(arr)/4;
    int a = 0,b = 0;
    for ( int i =0; i<=n-1; i++ ){ //array ki indexing n-1 hoti h
        if(i%2==0){
            a+=arr[i];
        }
        else{
            b+=arr[i];
        }
    }
    cout<<a-b<<endl;
  
 return 0;
}