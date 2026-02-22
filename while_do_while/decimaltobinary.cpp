#include <iostream>
using namespace std;

int main(){
  int number, binary = 0, remainder = 0, place = 1;
  cout<< "enter a number to convert: "<<endl;
  cin>>number;
  while(number > 0){
    remainder = number&1; /* it is as similar as number % 2; basically number will be
    converted to binary then it will perform bitwise and with one. */
    binary = binary + remainder * place;
    place = place * 10;
    number /= 2;
  }
  cout<< binary<<endl;
 return 0;
}