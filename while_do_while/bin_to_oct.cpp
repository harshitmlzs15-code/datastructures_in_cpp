#include <iostream>
using namespace std;

int main(){
   int binary_number;
  cout<<"enter the binary number you want to convert"<<endl;
  cin>>binary_number;
  int sum = 0, rem=0, mul=1;
  while(binary_number>0){
    rem = binary_number%10;
    sum = sum + rem*mul;
    mul*=2;
    binary_number/=10;
  }
  cout<<"decimal number is: "<<sum<<endl;

  int remainder = 0, multiplier = 1, add = 0;
  while(sum>0){
  remainder = sum%8;
  add = add + remainder*multiplier;
  multiplier*=10;
sum/=8;
  }
  cout<<"octal number: "<<add<<endl;
 return 0;
}