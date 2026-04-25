#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }
for ( int x = 0; x<n; x++){
    int max = -1;
    for ( int z = x+1; z<n; z++){
        if( arr[x] == arr[z] && z>max){
            max = z;       
}
if(max! = -1){
    cout<<arr[x]<<" at "<<
}
}
 return 0;
}
