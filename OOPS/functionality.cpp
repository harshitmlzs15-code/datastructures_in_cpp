#include <iostream>
using namespace std;

class Student{
    string name;
    int age;
    string grade;
    public:
    void nameis(string n){
        if(n.size()==0){
            cout<<"invalid name"<<endl;
        return;
        }
        else{
        name = n;
        }
    }
    void printname(){
        cout<<name<<endl;
    }
    void gradeis(string g){
        grade = g;
    }
    string printgrade(int x){
        if( x == 123){
            return grade;
        }
        else{
            return "invalid pass";
        }
    }
    void ageis(int v){
        if ( v < 8){
            cout<<"admission not allowed"<<endl;
        }
        else{
            age = v;
        }
    }
    void getage(){
        cout<<age<<endl;
    }

};

int main(){
    Student s1;
    s1.nameis("harshit");
    s1.nameis(""); //it prints invalid name 
    s1.printname(); //it prints harshit
    s1.gradeis("A+"); 
    cout<<s1.printgrade(123)<<endl; //it shows actual grade
    cout<<s1.printgrade(13)<<endl; //it shows invalid pass
    s1.ageis(5);
    s1.ageis(45);
    s1.getage();
 return 0;
}