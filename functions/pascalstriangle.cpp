#include <iostream>
using namespace std;
int factorial(int n){
    int f = 1;
    for (int i = 1; i<=n; i++){
        f*=i;
    }
    return f;
}

int main(){
    int value;
    cout<<"enter the value for which you want p.t: "<<endl;
    cin>>value;
    for(int i = 0; i<=value;i++){
        for(int m = value; m>=i;m--){
            cout<<" ";
        }
        for(int j = 0; j<=i; j++){
            cout<<(factorial(i)/(factorial(j)*factorial(i-j)))<<" ";
        }
        cout<<endl;

    }
  
 return 0;
}