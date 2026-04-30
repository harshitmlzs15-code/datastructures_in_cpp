#include <iostream>
using namespace std;
int main(){
int sumev= 0,num,lim, sumod=0,dif;
cout<<"enter start number: ";
cin>>num;
cout<<"enter end number: ";
cin>>lim;
if(num<0||lim<0) {
  cout<<"enter a valid input"<<endl;
} 
else{
for(int i=num;i<=lim;i++){
    if(i%2==0){
        cout<<"even:  "<<i<<endl;
        sumev = sumev + i;
       
    }
    else{
        cout<<"odd: "<<i<<endl;
        sumod = sumod + i;
    }
  }

   cout<<"sum even: "<<sumev<<endl;
   cout<<"sum odd: "<<sumod<<endl;
   dif = sumev-sumod;
   cout<<"difference in even and odd sum is: "<<dif<<endl;
}
 return 0;
}