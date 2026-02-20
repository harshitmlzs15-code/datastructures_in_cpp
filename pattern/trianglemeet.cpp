#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for( int i = 1; i<=n; i++){
          for( int m = 1; m<=i; m++){
            cout<<"*";
          }
          for(int k = 2*n - 2*i; k>=1; k--){
            cout<<" ";
          }
          for( int l = 1; l<=i; l++){
                cout<<"*";
          }
          cout<<endl;
    }
    for( int o = n-1; o>=1; o--){
        for( int f = o; f>=1; f--){
        cout<<"*";
        }
        for( int x = 2*n - 2*o; x>=1; x--){
            cout<<" ";
        }
        for( int u = o; u>=1; u--){
            cout<<"*";
        }
        cout<<endl;
    }

 return 0;
}