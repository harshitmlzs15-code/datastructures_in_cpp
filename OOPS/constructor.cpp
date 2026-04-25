#include <iostream>
using namespace std;

class customer{
    public:
    string name;
    int age;
    int balance;

    //constructor same name as class, it doesn't have a datatype
    //it's invoked automatically at the time of object creation..

    //below one is default constructor
    customer(){ 
        cout<<"constructor is called"<<endl;
    }
    //we can create as many constructor we want

    //below one is parameterised constructor
    customer(string a, int b, int c){
        name = a;
        age = b;
        balance = c;
        cout<<"parameterised constructor is invoked"<<endl;
    }
};

int main(){
    customer a;
    customer b("rohan", 28, 1000);
 return 0;
}