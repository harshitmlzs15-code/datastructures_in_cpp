#include <iostream>
using namespace std;
void greet(){
  cout<<"Hello, My World!"<<endl;
}
void from_harshit(){ //ye fn call hua
     greet(); //ab greet fn call hoga
  cout<<"i love you and i miss youuuu!"<<endl; //ye line print hoga
}
int main(){  //pehle main fn call hoga
  from_harshit(); //ab from_harshit fn call hoga
  return 0;
} 

