#include <iostream>
using namespace std;

int main(){
  int num,t;
  cin>>num;
  cout<<"the table of "<<num<<" is: "<<endl;
  for(int i=1;i<=10;i++){
    t=num*i;
    cout<<t<<endl;
  }
 return 0;
}