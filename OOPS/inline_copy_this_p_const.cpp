#include <iostream>
using namespace std;

class customer{
    public:
    string name;
    int age;
    int balance;

    customer(string name, int age, int balance){
        this->name = name; //this operator will store the address of the object calling it; so b ka address pass hoga isme then b ka name field ka value
        this->age = age;
        this->balance = balance;
        cout<<"parameterised constructor is invoked"<<endl;
    }
    inline customer(string a, int b): name(a), age(b){
        balance = 100;
    }
    customer(customer &b){ // this can be done through assignment operator too
        name = b.name;
        age = b.age;
        balance = b.balance;
    }
};

int main(){
    customer a("harshit", 20);
    customer b("rohan", 28, 1000);
    customer c(a);
    cout<<b.name<<endl;
    cout<<a.name<<endl;
    cout<<a.balance<<endl;
    cout<<c.name<<endl;

 return 0;
}