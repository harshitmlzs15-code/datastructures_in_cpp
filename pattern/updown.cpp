#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for ( int i = n; i>=1;i--){
        for(int j = 1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int m = i*2-1; m>=1; m--){
          cout<<"* ";
       }
        cout<<endl;
    }
}