#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
  for(int i =n;i>=1;i-- ){
    for(int j=1;j<=i;j++){
    cout<<"*";
  }
        for(int m = 1; m<=2*n-2*i; m++){
        cout<<" ";
        }
            for( int k = i; k>=1; k-- ){
                cout<<"*";
            }
            cout<<endl;
}
 for(int i =1;i<=n;i++ ){
    for(int j=1;j<=i;j++){
    cout<<"*";
 }
 for(int m = 2*n-2*i ; m>=1; m--){
        cout<<" ";
        }
        for( int k = 1; k<=i; k++ ){
                cout<<"*";
            }
 cout<<endl;
}
 return 0;
}