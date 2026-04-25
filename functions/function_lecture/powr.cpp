#include <iostream>
using namespace std;

int main(){
    int a; 
    cout<<"enter number: ";
    cin >> a;
    int b;
    cout<<" enter power: ";
    cin>>b;
int answer = 1;
while(b>0){
    answer = answer*a;
    b--;
}
cout<<answer<<endl;
 return 0;
}