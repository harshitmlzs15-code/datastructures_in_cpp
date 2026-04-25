#include <iostream>
using namespace std;
void swap(int a, int b){
   int c = a;
    a = b;
    b = c;
    
}
void swapd(int &a, int &b){
   int c = a;
    a = b;
    b = c;
    
}
int main(){
    int a, b;
    cin>>a>>b;
    cout<<" before swapping: "<<a<<b<<endl;
    swap(a,b);
    cout<<"after swapping: using call by value: "<<a<<b<<endl;
    swapd(a,b);
    cout<<"after swapping: using call by reference: "<<a<<b<<endl;
 return 0;
}