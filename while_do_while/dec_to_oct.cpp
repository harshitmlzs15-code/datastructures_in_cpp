#include <iostream>
using namespace std;

int main(){
  int number, sum = 0, rem = 0, mul=1;
  cin>>number;
  while(number>0){
    rem = number%8;
    sum = sum + rem*mul;
    mul*=10;
    number/=8;
  }
  cout<<sum<<endl;
 return 0;
}