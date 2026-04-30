#include <iostream>
using namespace std;

int main(){
    int x,y;
  cout<<" enter x co-ordinate: ";
  cin>> x;
  cout << " enter y co-ordinate: ";
  cin>> y;
if(x>0 && y>0){
    cout<<" 1st quadrant ";
}
else if(x>0 && y<0){
cout<< " 4th quadrant ";
}
else if (x<0 && y>0){
    cout<< " 2nd quadrant ";
}
else if (x<0 && y<0){
    cout<<"3rd quadrant ";
}
else{
    cout<<"point lies at origin ";
}
 return 0;
}