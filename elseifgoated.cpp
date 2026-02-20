#include <iostream>
using namespace std;

int main(){
    int n;
  cout<< "enter your marks: ";
  cin>> n;
  cout<<endl;
    if(n>80 && n<=100){
    cout<<"very good"<<endl;
    }
    else if(n>60 && n<=80){
        cout<<"good"<<endl;
    }
        else if(n>40 && n<=60){
            cout<<"average"<<endl;
        }
    else if (n<=40 && n>=0){
        cout<<"fail"<<endl;
    }
    else
    {
        cout<<"enter a valid input"<<endl;
    }
    
 return 0;
}
