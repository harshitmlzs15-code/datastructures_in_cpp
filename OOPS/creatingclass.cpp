#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int rollno;
};

int main(){
    student s1;
    
    s1.name = "harshit";
    s1.age = 20;
    s1.rollno = 53;

    cout<<s1.age<<" ";

 return 0;
}