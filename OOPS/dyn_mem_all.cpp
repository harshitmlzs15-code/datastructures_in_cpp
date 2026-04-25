#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    string grade;

};

int main(){
    student *x = new student; 
    // what the above line does:
    // 1. Creates an object of class student
    // 2. Allocates memory in heap
    // 3. Stores its address in pointer
    x->name = "harshit"; 
    // (*x).name = "harshit"; this is pointer to object conversion
    // objects are accessed using .(dot) while pointers are accessed using ->(arrow)
    (*x).age = 20;
    x->grade = "a+";
    cout<<(*x).age<<endl;
    cout<<x->name<<endl;
    cout<<x->grade<<endl;
  
 return 0;
}