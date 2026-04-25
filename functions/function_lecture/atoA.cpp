#include <iostream>
using namespace std;

char convert(char name){
    if(name<='a' || name>='z') return -1; // this check is must
    char answer = name - 'a' + 'A';

    return answer;
}

int main(){
    char name;
    cout<<"enter a alphabet : "<<endl;
    cin>>name;
   char x = convert(name);
   if (x == -1){
    cout<<" invalid input"<<endl;
   }
   else{
    cout<<x<<endl;
   }
  
 return 0;
}