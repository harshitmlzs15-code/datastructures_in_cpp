#include <iostream>
using namespace std;
class cricketteam{
    //by default class pvt hoti h, pvt class ko fn se access kr skte h public fn bna kr
    string name;
    int age;
    int jersey_no;
    public:
    //setter function we can use any name; its not confined to only setname
    void setname(string n){ // it will set the name of the cricket team player
        name = n;
    }
    //getter function can use any name; its not confined to only getname
    //use of void function revision
    void getname(){
        cout<<name<<endl; //void doesn't return a value: use cout to print
        //need not to use cout<<fn name; as it itself prints the value
    }
    void setage(int x){
        age = x;
    }
    //revision of int function
    int getage(){
        return age; //int returns a value, so we need to cout it in the main fn
    }
    void hisjersey_no(int y){
        jersey_no = y;
    }

    void printjersey_no(){
        cout<<jersey_no<<endl;
    }

};
int main(){
    cricketteam player1;
    player1.setname("harshit");
    player1.getname();
    player1.setage(20);
    cout<<player1.getage()<<endl;
    player1.hisjersey_no(18);
    player1.printjersey_no();
 return 0;
}