#include <iostream>
using namespace std;

void swap(int a,int b){
a = a+b;
b = a-b;
a = a-b;
cout<<"second value after swapping is " << b<<endl<<"1st value after swapping is " << a<<endl;
}
int main(){
    int x, y;
cout<<"enter first value:- ";
cin>>x;
cout<<endl<<"enter second value:- ";
cin>>y;
    swap(x,y);
}
