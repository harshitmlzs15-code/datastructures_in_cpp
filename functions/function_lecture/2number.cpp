#include <iostream>
using namespace std;

int sum(int a, int b, int c){
    int answer = a + b + c;
    return answer;
}
void mul(int a, int b, int c){
    int answer = a*b*c;
    cout<<answer;
}

int main(){
int x, y, z;
cout<<"enter 1st number: ";
cin>>x;
cout<<"enter 2nd number: ";
cin>>y;
cout<<"enter 3rd number: ";
cin>>z;
cout<<"sum of the 3 numbers is: "<<sum(x,y,z)<<endl; // can store it in a variable
cout<<"the product of three numbers is: ";
mul(x,y,z); // can't store it in a variable because it's of void return type.
cout<<endl;
 return 0;
}