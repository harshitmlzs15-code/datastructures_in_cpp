#include <iostream>
using namespace std;

int main(){
  int a,b,c;
  cout<< "enter first number: "<< endl;
  cin>>a;
    cout<< "enter second number: "<< endl;
    cin>>b;
    cout<< "enter third number: "<< endl;
    cin>>c;
if(a>b){
    if(a>c){
        cout<<"the largest number is a:"<<a<<endl;
    }
        else{
             cout<<"the largest number is c:"<<c<<endl;
        }
    }
    else{
        if (c>b){
            cout<<"the largest number is c: "<<c<<endl;
        }
            else{
                cout<<"the largest number is b"<<b<<endl;
    }
        }   
 return 0;
}