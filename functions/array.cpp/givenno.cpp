#include <iostream>
using namespace std;

int main(){
    int arr[]={1,3,50,10,2,5,6};
    int n = sizeof(arr)/4;
    int k = 4;
    int count = 0;
    for ( int i =0; i<=n-1; i++ ){ //array ki indexing n-1 hoti h
        if(k<arr[i]){
            count++;
        }
    }
    cout<<count<<endl;
  
 return 0;
}