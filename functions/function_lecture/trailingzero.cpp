#include <iostream>
using namespace std;

long long factorial(int digit){
    long long mul = 1;
    if (digit == 0 || digit == 1){
        return 1;
    }
    else{
        while(digit){
            mul = mul * digit;
            digit --;
        }
    
    return mul;
    }
}
long long trailingzero(long long fac){
    int count = 0;
    while(fac%10==0){
        count ++;
        fac = fac/10;   
    }
    return count;
}


int main(){
  int digit;
  cout<<"enter the value whose factorial you want to check: "<<endl;
  cin>>digit;
  long long y = factorial(digit);
  cout<<y<<endl;
  int z = trailingzero(y);
  cout<<z<<endl;
 return 0;
}
