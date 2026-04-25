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
 return 0;
}
// or this
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
  int binary_number;
  cout<<"enter the binary number you want to convert"<<endl;
  cin>>binary_number;
  int sum = 0, rem=0;
  int count = 0;
  int temp = binary_number;
  while(temp>0){
     temp/=10;
     count++;
  }
  for(int i = 0; i<count; i++){
    rem = binary_number%2;
    sum = sum + rem*pow(2, i);
    binary_number/=10;
  }
  cout<<"decimal number is: "<<sum<<endl;
 return 0;
}
 */