#include <iostream>
using namespace std;

int main(){
  long long x,y;
  char op;
  cout<<"enter first number: ";
  cin>>x;
  cout<<"enter operator: ";
  cin>>op;
  cout<<" enter second number: ";
  cin>>y;
  switch (op){
    case '+':
    cout<<x+y<<endl;
    break;
    case '-':
    cout<<x-y<<endl;
    break;
    case '/':
    cout<<x/y<<endl;
    break;
    case '*':
    cout<<x*y<<endl;
    break;
    default:
    cout<< "invalid input"<<endl;
  }
 return 0;
}